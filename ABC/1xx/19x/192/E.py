from collections import deque

N, M, X, Y = map(int, input().split())
G = [[] for _ in range(N + 1)]

for _ in range(M):
    a, b, t, k = map(int, input().split())
    G[a].append((b, t, k))
    G[b].append((a, t, k))

d = deque()
d.append(X)
R = [int(1e15) for _ in range(N + 1)]
R[X] = 0


while len(d) > 0:
    a = d.popleft()
    for (b, t, k) in G[a]:
        m = k - R[a] % k
        z = R[a] + (m if m < k else 0) + t
        if z < R[b]:
            R[b] = z
            d.appendleft(b)

print(-1 if R[Y] == int(1e15) else R[Y])
