N,Y = gets.strip.split.map(&:to_i)
i,j,k = -1,-1,-1

(0..N).each do |a|
  (0..N-a).each do |b|
    i,j,k = a,b,N-a-b if a*10000+b*5000+(N-a-b)*1000 == Y
    break if i!=-1
  end
end

puts "#{i} #{j} #{k}"
