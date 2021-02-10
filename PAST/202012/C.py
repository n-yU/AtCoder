N, r = int(input()), ''

while 1:
  d = N % 36
  if d < 10:
    r += str(d)
  else:
    r += chr(ord('A') + d - 10)
  
  if N < 36:
    break
  N //= 36
    
print(r[::-1])
