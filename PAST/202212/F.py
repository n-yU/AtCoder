n = int(input())
a, b, c, d = list(map(int, input().split()))
x = input()
x = int(x[0]) * 1000 + int(x[2:])

r = (a + b * 2 + c * 3 + d * 4) * 1000
print(max((r - x * n + x - 1001) // (x - 1000), 0))
