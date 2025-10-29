#!/usr/bin/env ruby

abort("Usage: $0 <lists>") if not ARGV.size == 1
abort("lists must be an integer") if Integer(ARGV[0], exception: false).nil?

k = ARGV[0].to_i

# Print function definition
puts "static bool merge_k(struct test *t, int n, int **segments, int *cache) {"

# Print stopping case
puts "\tif (n > #{ k })"
puts "\t\treturn false;"
puts ""

# Print many branches
puts "\tswitch (n) {"
(3..k).each do |n|
  puts "\tcase #{ n }:"
  puts "\t\tmerge_#{ n }(t, segments, cache);"
  puts "\t\tbreak;"
end
puts "\t}"

puts ""
puts "\treturn true;"
puts "}"
