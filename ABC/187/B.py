N = int(input())
P, c = [tuple() for _ in range(N)], 0
for i in range(N):
  P[i] = tuple(map(int, input().split()))

for i in range(N):
  for j in range(i + 1, N):
    if (abs((P[i][1] - P[j][1]) / (P[i][0] - P[j][0])) <= 1):
      c += 1

print(c)
