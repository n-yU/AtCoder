N, T = int(input()), []

for s in input():
  T = [t for t in T if t != s]
  T += s
print(''.join(T))
