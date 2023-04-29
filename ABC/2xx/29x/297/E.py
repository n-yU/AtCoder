import heapq

N, K = map(int, input().split())
A = list(map(int, input().split()))

Q, p, c = A.copy(), -1, 0
heapq.heapify(Q)

while c < K:
    t = heapq.heappop(Q)
    if t == p:
        continue
    p = t
    for a in A:
        heapq.heappush(Q, p + a)

    c += 1
print(p)
