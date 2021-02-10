N = int(input())
px, py = map(int, input().split())
r = 0

for _ in range(N - 1):
    x, y = map(int, input().split())
    r += abs(x - px) + abs(y - py)
    px, py = x, y
print(r)
