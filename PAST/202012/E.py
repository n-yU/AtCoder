H, W = map(int, input().split())
S = [input() for _ in range(H)]
T = [input() for _ in range(H)]
pS = [(i, j) for i in range(H) for j in range(W) if S[i][j] == '#']
pT = [(i, j) for i in range(H) for j in range(W) if T[i][j] == '#']

for _ in range(4):
    for di in range(-30, 31):
        for dj in range(-30, 31):
            for p in pT:
                t = (p[0] + di, p[1] + dj)
                if t in set(pS) or not(0 <= t[0] < H and 0 <= t[1] < W):
                    break
            else:
                print('Yes')
                exit()
    pT = [(p[1], -p[0]) for p in pT]

print('No')
