from heapq import heappop, heappush

N, M = map(int, input().split())
G, P, S, r = [[] for _ in range(N)], [], {0}, 0

for i in range(M):
    a, b, c = map(int, input().split())
    a, b = a - 1, b - 1
    G[a].append((c, i, b))
    G[b].append((c, i, a))

    if min(a, b) == 0:
        heappush(P, G[0][-1])
    r += max(0, c)

while len(S) < N:
    c, i, t = heappop(P)
    if t in S:
        continue
    S.add(t)
    r -= max(0, c)

    for g in G[t]:
        if g[2] in S:
            continue
        heappush(P, g)

print(r)
