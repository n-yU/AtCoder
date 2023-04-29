from math import radians, sin, cos

N = int(input())
x0, y0 = map(float, input().split())
xn, yn = map(float, input().split())

xo, yo = (x0 + xn) / 2, (y0 + yn) / 2
x0s, y0s, r = x0 - xo, y0 - yo, 360 / N
print(x0s * cos(radians(r)) - y0s * sin(radians(r)) + xo,
      x0s * sin(radians(r)) + y0s * cos(radians(r)) + yo)
