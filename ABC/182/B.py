N = int(input())
A = list(map(int, input().split()))
r, s = 2, 0

for t in range(2, max(A) + 1):
  c = 0
  for a in A:
    c += (a % t == 0)
  if c > s:
    s, r = c, t
print(r)
