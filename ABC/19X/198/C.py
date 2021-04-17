from math import sqrt

r, x, y = map(float, input().split())
d = sqrt(x * x + y * y)
if d == r:
    print(1)
elif d < r:
    print(2)
else:
    w = int(d / r)
    print(w if w * r == d else w + 1)
