N, M = int(input()), []
for _ in range(N):
    d, s, t = map(int, input().split())
    d -= 1
    M.append((d * 24 + s, d * 24 + t))

M = sorted(M)
for i in range(N - 1):
    if M[i][1] > M[i + 1][0]:
        print('Yes')
        break
else:
    print('No')
