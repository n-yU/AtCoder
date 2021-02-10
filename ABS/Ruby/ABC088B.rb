_n = gets.to_i
as = gets.strip.split.map(&:to_i)
a=0
b=0

as = as.sort.reverse
until as.empty? do
  a += as.shift
  break if as.empty?
  b += as.shift
end
p a-b
