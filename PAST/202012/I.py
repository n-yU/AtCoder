from heapq import heappush, heappop

N, M, K = map(int, input().split())
H = list(map(int, input().split()))
C = set(map(lambda x: int(x) - 1, input().split()))
G, Q = [[] for _ in range(N)], []

for _ in range(M):
    a, b = map(lambda x: int(x) - 1, input().split())
    if H[a] > H[b]:
        a, b = b, a
    G[a].append(b)

R = [int(1e9) for _ in range(N)]
for c in C:
    heappush(Q, (0, c))
    R[c] = 0

while Q:
    p, v = heappop(Q)
    if p > R[v]:
        continue
    for nv in G[v]:
        if R[v] + 1 < R[nv]:
            R[nv] = R[v] + 1
            heappush(Q, (R[nv], nv))

print('\n'.join(list(map(str, [-1 if r == 1e9 else r for r in R]))))
