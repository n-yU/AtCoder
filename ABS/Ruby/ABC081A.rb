nums = gets.strip.split('').map(&:to_i)
p nums.inject(:+)
