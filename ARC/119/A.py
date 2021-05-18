n = int(input())
r, b = 1e18, 0

while 2 ** b <= n:
    a = n // (2 ** b)
    c = n % (2 ** b)
    r = min(r, a + b + c)
    b += 1
print(r)
