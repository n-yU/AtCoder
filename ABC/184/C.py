r1, c1 = map(int, input().split())
r2, c2 = map(int, input().split())
r, c, a = r2 - r1, c2 - c1, 0

if r == 0 and c == 0:
    a = 0
elif r == c or r == -c or abs(r) + abs(c) <= 3:
    a = 1
elif abs(r) + abs(c) <= 6 or abs(r + c) % 2 == 0 or abs(r + c) <= 3 or abs(r - c) <= 3:
    a = 2
else:
    a = 3
print(a)
