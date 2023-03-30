n, k = gets.chomp.split(' ').map(&:to_i)
ci = gets.chomp.split(' ').map(&:to_i)

ci.sort!

if n < ci.length
n = ci.length
end

total_count, per_person, cur_round, total_amount = 0, 0, 0, 0
p_flower = ci.length - 1

while total_count < n
total_amount += ci[p_flower] * (per_person + 1)

cur_round += 1
if cur_round == k
cur_round = 0
per_person += 1
end

total_count += 1
p_flower -= 1
end

puts total_amount





