from itertools import permutations

N, K = map(int, input().split())
T, c = [], 0
for _ in range(N):
  T.append(list(map(int, input().split())))
           
for g in permutations(list(range(1, N))):
  p, s = 0, 0
  for x in g:
    s += T[p][x]
    p = x
  if s + T[p][0] == K:
    c += 1
print(c)
