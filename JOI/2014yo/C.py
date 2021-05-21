w, h, n = map(int, input().split())
px, py = map(int, input().split())
r = 0

for _ in range(n - 1):
    x, y = map(int, input().split())
    try:
        a = (y - py) / (x - px)
    except ZeroDivisionError:
        a = 0
    if a >= 0:
        r += max(abs(x - px), abs(y - py))
    else:
        r += abs(x - px) + abs(y - py)
    px, py = x, y

print(r)
