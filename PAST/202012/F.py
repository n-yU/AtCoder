N, M = map(int, input().split())
Y, r = [set(list(map(int, input().split()))) for _ in range(M)], 0

for i in range(0, 2 ** N):
    s, t = set([j + 1 for j, c in enumerate(format(i, '0{}b'.format(N))) if int(c)]), set()
    for y in Y:
        a = y & s
        if len(a) == 2:
            t.add((y - s).pop())
        if len(a) == 3:
            break
    else:
        r = max(r, len(t))

print(r)
