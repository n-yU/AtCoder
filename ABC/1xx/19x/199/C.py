N, S, Q = int(input()), input(), int(input())
X = dict(zip(list(range(N * 2)), list(range(N * 2))))
d = 0

for _ in range(Q):
    t, a, b = map(lambda x: int(x) - 1, input().split())
    if t == 0:
        X[(b + d) % (N * 2)], X[(a + d) % (N * 2)] = X[(a + d) % (N * 2)], X[(b + d) % (N * 2)]
    else:
        d += N

print(''.join([S[X[(x + d) % (N * 2)]] for x in X.keys()]))
