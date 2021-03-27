X, Y = map(int, input().split())
A, B = map(int, input().split())
sx, sy = map(int, input().split())
tx, ty = map(int, input().split())
c = (B - A) / X

if (c * sx + A > sy) ^ (c * tx + A > ty):
    print('Yes')
else:
    print('No')
