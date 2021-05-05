a, b = map(int, input().split())

for i in range(1, b + 1):
    if (b // i - (a - 1) // i) > 1:
        r = i
print(r)
