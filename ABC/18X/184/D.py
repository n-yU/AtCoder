from collections import deque

A, B, C = map(int, input().split())
s = 0.0

d = deque()
d.appendleft((A, B, C))
x = [[[0.0] * 101 for i in range(101)] for j in range(101)]
x[A][B][C] = 1

while len(d) > 0:
    a, b, c = d.pop()

    if 100 in [a, b, c]:
        s += x[a][b][c] * (a + b + c - A - B - C)
        continue

    if a != 0 and x[a + 1][b][c] == 0:
        d.appendleft((a + 1, b, c))
    x[a + 1][b][c] += x[a][b][c] * (a / (a + b + c))
    if b != 0 and x[a][b + 1][c] == 0:
        d.appendleft((a, b + 1, c))
    x[a][b + 1][c] += x[a][b][c] * (b / (a + b + c))
    if c != 0 and x[a][b][c + 1] == 0:
        d.appendleft((a, b, c + 1))
    x[a][b][c + 1] += x[a][b][c] * (c / (a + b + c))

print(s)
