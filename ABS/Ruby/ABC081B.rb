_n = gets.to_i
as = gets.strip.split.map(&:to_i)
c = 0
while as.all?(&:even?) do
  c = c.next;
  as = as.map { |a| a/2 }
end
p c
