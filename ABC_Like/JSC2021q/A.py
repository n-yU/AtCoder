x, y, z = map(int, input().split())
r = y * z / x
print(int(r - 1) if r == int(r) else int(r))
