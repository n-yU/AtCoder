from heapq import heappush, heappop

N, M = map(int, input().split())
X = dict(A=dict(), B=dict(), C=dict())
X['A']['B'], X['A']['C'], X['B']['C'] = map(int, input().split())
X['B']['A'], X['C']['A'], X['C']['B'] = X['A']['B'], X['A']['C'], X['B']['C']
W = dict(A=[], B=[], C=[])

for i, c in enumerate(input()):
    W[c].append(str(i + 1))

G = dict(zip(list(map(str, range(1, N + 1))) + ['A', 'AA', 'B', 'BB', 'C', 'CC'], [[] for _ in range(N + 6)]))
for _ in range(M):
    a, b, c = input().split()
    c = int(c)
    G[a].append((c, b))
    G[b].append((c, a))

for w in ['A', 'B', 'C']:
    for t in W[w]:
        G[t].append((0, w))
        G[w * 2].append((0, t))

for w1, w2 in zip(['A', 'B', 'C'], ['B', 'C', 'A']):
    G[w1].append((X[w1][w2], w2 * 2))
    G[w2].append((X[w2][w1], w1 * 2))

R, Q = dict(zip(list(map(str, range(1, N + 1))) + ['A', 'AA', 'B', 'BB', 'C', 'CC'], [int(1e15) for _ in range(N + 6)])), []
R['1'] = 0
heappush(Q, (0, '1'))

while Q:
    c, t = heappop(Q)
    if c > R[t]:
        continue
    for nc, nt in G[t]:
        if R[t] + nc < R[nt]:
            R[nt] = R[t] + nc
            heappush(Q, (R[nt], nt))

print(R[str(N)])
