A, B = map(int, input().split())
p, m = A + B, A - B
if p < m:
    p, m = m, p
print(p)
print(m)
