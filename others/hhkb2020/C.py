N = int(input())
P, E, i = list(map(int, input().split())), [0 for _ in range(200001)], 0

for p in P:
  E[p] += 1
  while E[i] > 0:
    i += 1
  print(i)
