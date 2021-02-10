N, M = map(int, input().split())
x, c, r = dict(), 0, list(range(N))

for i in range(N+1):
    x[i] = i-1
for _ in range(M):
    d = int(input())
    x[c], x[d], c = x[d], x[c], d

for i in x.items():
    if i[1] != -1:
        r[i[1]] = i[0]
for i in r:
    print(i)
