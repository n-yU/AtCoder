n = int(input())
l, r = 1, n + 1

while r - l > 1:
  m = (l + r) // 2
  x = m * (m + 1) // 2
  if x <= n + 1:
    l = m
  else:
    r = m

print(n - l + 1)
