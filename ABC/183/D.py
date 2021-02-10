N, W = map(int, input().split())
U, t = [0] * 200001, 0

for _ in range(N):
  S, T, P = map(int, input().split())
  U[S] += P
  U[T] -= P
  
for u in U:
  t += u
  if t > W:
    print('No')
    exit()
print('Yes')
