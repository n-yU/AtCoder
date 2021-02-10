n = gets.to_i
data = n.times.map { gets.strip.split.map(&:to_i) }

def is_reachable(crn, data)
  tc, xc, yc = crn
  tn, xn, yn = data
  d = (xn-xc).abs+(yn-yc).abs
  t = tn-tc
  return false if d>t
  (d-t).even?
end

crn = [0, 0, 0]
data.each do |d|
  unless is_reachable(crn, d)
    puts 'No'
    exit 0
  end
  crn = d
end

puts 'Yes'
