wds = ['dream', 'dreamer', 'erase', 'eraser']
s = gets.strip

until s.empty? do
  isr = false
  wds.map do |w|
    if s[-w.size, w.size]==w
      s = s[0..-w.size-1]
      isr = true
      break
    end
  end

  unless isr
    puts 'NO'
    exit 0
  end
end

puts 'YES'
