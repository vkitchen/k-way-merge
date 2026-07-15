#!/usr/bin/env ruby

require 'csv'

abort("Usage: #{$0} <run.txt>") if ARGV.length != 1
abort('Must be run with full run output not dat') if !ARGV[0].end_with?('.txt')

iter_count = 0
init = 0
baseline = 0
runs = 0

lines = File.readlines(ARGV[0]).map { |line| line.strip }

lines.each do |line|
  iter_count = line.split[1].to_i if line.start_with?('ITER_COUNT')
  init = line.split(': ')[1].to_i if line.start_with?('Init:')
  baseline += line.split[2].to_i if line.start_with?('Baseline (copy+sort)')
  if (line.count('-') == line.length)..(line.length == 0)
    parts = line.split('|')
    next unless parts.length == 5
    times = parts[3]
    runs += times.split(',')[1].to_i
  end
end

total_time = init + baseline + iter_count * runs

# https://gist.github.com/emmahsax/af285a4b71d8506a1625a3e591dc993b
def human_readable_time(secs)
  [[60, :seconds], [60, :minutes], [24, :hours], [Float::INFINITY, :days]].map do |count, name|
    next unless secs > 0

    secs, number = secs.divmod(count)
    "#{number.to_i} #{number == 1 ? name.to_s.delete_suffix('s') : name}" unless number.to_i == 0
  end.compact.reverse.join(', ')
end

puts human_readable_time(total_time / 1000)
