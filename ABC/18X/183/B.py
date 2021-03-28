sx, sy, gx, gy = map(float, input().split())
a = (sy + gy) / (sx - gx)
print(-(sy -  a * sx) / a)
