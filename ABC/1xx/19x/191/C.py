H, W = map(int, input().split())
S, r = [input() for _ in range(H)], 0

for i in range(H - 1):
    for j in range(W - 1):
        T = S[i][j] + S[i + 1][j] + S[i][j + 1] + S[i + 1][j + 1]
        r += sum([1 for t in T if t == '#']) % 2

print(r)
