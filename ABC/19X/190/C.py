N, M = map(int, input().split())
r = 0

AB = [tuple(map(int, input().split())) for _ in range(M)]

K = int(input())
CD = [tuple(map(int, input().split())) for _ in range(K)] 

for i in range(2 ** K):
    b, t, n = format(i, '0{}b'.format(K)), set(), 0
    for j, (c, d) in enumerate(CD):
        if int(b[j]):
            t.add(c)
        else:
            t.add(d)
    for a, b in AB:
        if a in t and b in t:
             n += 1
    r = max(r, n)

print(r)
