n, k = map(int, input().split())
for _ in range(k):
    if n % 200:
        n = n * 1000 + 200
    else:
        n //= 200
print(n)
