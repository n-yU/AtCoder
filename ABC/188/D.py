N, C = map(int, input().split())
S, x, r, p = dict(), 0, 0, 0

for _ in range(N):
    a, b, c = map(int, input().split())
    sa, sb = S.get(a), S.get(b + 1)

    S[a] = c + (0 if sa is None else sa)
    S[b + 1] = -c + (0 if sb is None else sb)

for d, y in sorted(S.items(), key=lambda x: x[0]):
    r += (d - p) * min(x, C)
    x += y
    p = d

print(r)
