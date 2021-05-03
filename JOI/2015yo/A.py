a, b, c, d, p = map(int, [input() for _ in range(5)])
print(min(a * p, b + max(p - c, 0) * d))
