N, M = map(int, input().split())
S, C = [str() for _ in range(N+2)], [[0 for _ in range(M)] for _ in range(N)]
H = [-1, -1, -1, 0, 0, 0, 1, 1, 1]
W = [-1, 0, 1, -1, 0, 1, -1, 0, 1]

S[0], S[-1] = '.'*(M+2), '.'*(M+2)
for i in range(N):
  S[i + 1] = '.' + input() + '.'

for i in range(N):
  for j in range(M):
    for h, w in zip(H, W):
      if S[i+1+h][j+1+w] == '#':
        C[i][j] += 1
    C[i][j] = str(C[i][j])

print('\n'.join([''.join(c) for c in C]))
