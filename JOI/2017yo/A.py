a, b, c, d, e = map(int, [input() for _ in range(5)])
print(max(0 - a, 0) * c + (d if a <= 0 else 0) + e * (b - max(a, 0)))
