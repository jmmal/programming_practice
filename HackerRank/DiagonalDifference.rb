#!/bin/ruby

n = gets.strip.to_i
a = Array.new(n)
sum1 = 0
sum2 = 0
for a_i in (0..n-1)
    a_t = gets.strip
    a[a_i] = a_t.split(' ').map(&:to_i)
end

for i in (0..n-1)
    sum1 += a[i][i]
    sum2 += a[i][n - 1 - i]
end
puts (sum1 - sum2).abs
