N, K = map(int, input().split())
a = N

for i in range(0, K):
    s = str(a)
    g1 = int(''.join(sorted(s)[::-1]))
    g2 = int(''.join(sorted(s)))
    a = g1 - g2
print(a)
