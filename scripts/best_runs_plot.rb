#!/usr/bin/env ruby

require 'csv'

abort("Usage: #{$0} <plot.dat>") if ARGV.length != 1

plot = CSV.read(ARGV[0], headers: true)

plot.delete('n')

algs = plot.headers.group_by { |v| v.gsub(/\(O[0123sz]\)/, '').rstrip }

results = {}
algs.each do |k, v|
  results[k] = v.map { |col| plot[col] }.transpose.map do |row|
    row.min_by { |v| v.to_i == 0 ? Float::INFINITY : v.to_i }
  end
end

csv = CSV.generate do |csv|
  csv << ['n', *results.keys]
  results.values.transpose.each_with_index do |row, i|
    csv << [i+3, *row]
  end
end

puts csv
