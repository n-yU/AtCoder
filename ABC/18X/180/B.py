from math import sqrt

N = int(input())
m, e, c = 0, 0, 0
for x in list(map(int, input().split())):
  x = abs(x)
  m += x
  e += x * x
  c = max(c, x)

print(m)
print(sqrt(e))
print(c)
