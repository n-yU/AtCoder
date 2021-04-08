H, W = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(H)]
r = 1e9

for i in range(H):
    for j in range(W):
        t = 0
        for x in range(H):
            for y in range(W):
                t += A[x][y] * min(abs(i - x), abs(j - y))
        r = min(r, t)

print(r)
