n = int(input())
if n == 0:
    print(1)
    exit()

r = [0 for _ in range(n + 1)]
r[0], r[1] = 1, 1

for i in range(n - 1):
    r[i + 2] = r[i] + r[i + 1]
print(r[n])
