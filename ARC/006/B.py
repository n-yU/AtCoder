N, L = map(int, input().split())
g = [{} for _ in range(L)]

for i in range(L):
    for j, t in enumerate(input()):
        if t == '-':
            g[i][j // 2 + 1], g[i][j // 2] = j // 2, j // 2 + 1

for i, c in enumerate(input()):
    if c == 'o':
        s = i // 2

for i in range(L):
    s = g[L-1-i].get(s, s)
print(s+1)
