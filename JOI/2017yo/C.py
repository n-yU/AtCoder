n, m, d = map(int, input().split())
V, r = [input() for _ in range(n)], 0

for i in range(n):
    r += sum([max(0, len(s) - d + 1) for s in V[i].split('#')])
for j in range(m):
    v = ''.join([V[i][j] for i in range(n)])
    r += sum([max(0, len(s) - d + 1) for s in v.split('#')])
print(r)
