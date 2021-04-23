n, m = map(int, input().split())
F = [input() for _ in range(n)]
r = 1e9

for i in range(1, n - 1):
    for j in range(i + 1, n):
        t, m = 0, 'W'
        for k in range(n):
            if k >= i:
                m = 'B'
            if k >= j:
                m = 'R'

            t += sum([c != m for c in F[k]])

        r = min(r, t)
print(r)
