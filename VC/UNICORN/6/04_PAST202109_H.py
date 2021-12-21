import sys
sys.setrecursionlimit(10000)


def dfs(i, d, p, X, P):
    r = False
    if d == X:
        r = True
    else:
        for x, c in P[i]:
            if x == p:
                continue
            r |= dfs(x, d + c, i, X, P)
    return r


N, X = map(int, input().split())
P = [[] for _ in range(N)]

for _ in range(N - 1):
    a, b, c = map(int, input().split())
    a, b = a - 1, b - 1
    P[a].append((b, c))
    P[b].append((a, c))

for i in range(N - 1):
    if dfs(i, 0, -1, X, P):
        print('Yes')
        break
else:
    print('No')
