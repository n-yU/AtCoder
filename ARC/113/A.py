K = int(input())
r = 0

for i in range(1, K + 1):
    for j in range(1, int(K / i) + 1):
        r += K // (i * j)
print(r)
