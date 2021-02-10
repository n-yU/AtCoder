a, b, x, y = map(int, input().split())
print(abs((b - a) * 2 + 1) // 2 * min(x * 2, y) + x)
