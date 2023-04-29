N = int(input())
A = list(map(int, input().split()))

t, m, x, r = 0, 0, 0, 0
for a in A:
    t += a
    m = max(m, t)
    r = max(r, x + m)
    x += t
print(r)
