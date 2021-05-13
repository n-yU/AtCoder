H, W = map(int, input().split())
S = [input() for _ in range(H)]
R = [[0 for _ in range(W)] for _ in range(H)]

for h in range(H):
    p = -1
    for w in range(W):
        if S[h][w] == 'c':
            p = 0
        else:
            if p >= 0:
                p += 1
        R[h][w] = p

print('\n'.join([' '.join(map(str, r)) for r in R]))
