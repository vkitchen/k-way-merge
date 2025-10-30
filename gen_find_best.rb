#!/usr/bin/env ruby

abort("Usage: $0 <lists>") if not ARGV.size == 1
abort("lists must be an integer") if Integer(ARGV[0], exception: false).nil?

fin = ARGV[0].to_i

(3..fin).each do |k|
  # Print function definition
  puts "static void merge_#{ k }(struct test *t, int **segments, int *cache) {"
  puts "\tsize_t pos = 0;"
  puts "\tsize_t best;"
  puts "\tfor (;;) {"

  # Print stopping case
  print "\t\tif (cache[0] == 0"
  (1..k-1).each do |n|
    print " && cache[#{ n }] == 0"
  end
  puts ")"
  puts "\t\t\tbreak;"
  puts ""

  # Print many branches
  (0..k-2).each do |n|
    if n == 0
      print "\t\tif ("
    else
      print "\t\t} else if ("
    end

    (0..k-1).each do |other|
      next if n == other
      print " && " unless other == 0 || (other == 1 && n == 0)
      print "cache[#{ n }] >= cache[#{ other }]"
    end
    puts ") {"
    puts "\t\t\tbest = #{ n };"
  end

  puts "\t\t} else {"
  puts "\t\t\tbest = #{ k-1 };"
  puts "\t\t}"

  puts ""
  puts "\t\tt->results[pos++] = cache[best];"
  puts "\t\tcache[best] = *++segments[best];"

  puts "\t}"
  puts "}"
end

# Print switch function definition
puts "static bool merge_k(struct test *t, int n, int **segments, int *cache) {"

# Print stopping case
puts "\tif (n > #{ fin })"
puts "\t\treturn false;"
puts ""

# Print many branches
puts "\tswitch (n) {"
(3..fin).each do |n|
  puts "\tcase #{ n }:"
  puts "\t\tmerge_#{ n }(t, segments, cache);"
  puts "\t\tbreak;"
end
puts "\t}"

puts ""
puts "\treturn true;"
puts "}"
