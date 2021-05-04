n, l, t, x = map(int, input().split())
ok, y, r = 1, 0, 0

for _ in range(n):
    a, b = map(int, input().split())
    if a > t and b >= l:
        ok = 0
        break
    if b >= l:
        if y + a == t:
            r += x
            y = 0
        elif y + a > t:
            r += t - y + x
            y = a
            if y == t:
                r += x
                y = 0
        else:
            y += a
    else:
        y = 0
    r += a

print(r if ok else 'forever')
