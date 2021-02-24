H, W, N, M = map(int, input().split())
L = set(tuple(map(lambda x: int(x) - 1, input().split())) for _ in range(N))
B = set(tuple(map(lambda x: int(x) - 1, input().split())) for _ in range(M))
R = [[0 for j in range(W)] for i in range(H)]
SV, SH = [[0 for j in range(W)] for i in range(H)], [[0 for j in range(W)] for i in range(H)]

for i in range(H):
    for j in range(W):
        if (i, j) not in L:
            continue
        if not SV[i][j]:
            for k in reversed(range(i)):
                SV[k][j] = 1
                if (k, j) in B:
                    break
                R[k][j] = 1
            for k in range(i, H):
                SV[k][j] = 1
                if (k, j) in B:
                    break
                R[k][j] = 1
        if not SH[i][j]:
            for k in reversed(range(j)):
                SH[i][k] = 1
                if (i, k) in B:
                    break
                R[i][k] = 1
            for k in range(j, W):
                SH[i][k] = 1
                if (i, k) in B:
                    break
                R[i][k] = 1

print(sum([sum(r) for r in R]))
