from math import sqrt
X, Y = map(int, input().split())
cx, cy = 0, 0

for d in range(1, max(X, Y) + 1):
    cx += (X % d == 0)
    cy += (Y % d == 0)

if cx == cy:
    print('Z')
else:
    print('X' if cx > cy else 'Y')
