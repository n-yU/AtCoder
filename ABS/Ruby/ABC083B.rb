def dg n
  sum = 0
  while n>0 do
    sum += n%10
    n /= 10
  end
  sum
end

N,A,B = gets.strip.split.map(&:to_i)
ans = (1..N)
	.map{ |i| [i, dg(i)] }
	.select{ |d| A<=d[1] && d[1]<=B }
	.inject(0) { |sum, d| sum+d[0] }
p ans
