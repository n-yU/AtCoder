B, C = map(int, input().split())

if C == 0:
    r = 1
elif C % 2:
    n = C // 2

    a, b = -B - n, -B + n
    if n > 0:
        c, d = B - n, B + n - 1
    else:
        c, d = B, B
else:
    n1, n2 = C // 2, C // 2 - 1
    if n1 > 0:
        a, b = B - n1, B + n1 - 1
    else:
        a, b = B, B
    c, d = -B - n2, -B + n2

r = (b - a + 1) + (d - c + 1) - max(0, min(b, d) - max(a, c) + 1)
print(r)
