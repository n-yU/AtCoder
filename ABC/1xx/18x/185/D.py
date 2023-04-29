N, M = map(int, input().split())
A = sorted(list(map(int, input().split())))
p, k, r = 0, 1000000007, 0

for a in A:
    if a - p - 1 > 0:
        k = min(k, a - p - 1)
    p = a

p = 0
for a in A:
    if a - p - 1 > 0:
        r += (a - p - 1) // k + ((a - p - 1) % k != 0)
    p = a
r += (N - p) // k + ((N - p) % k != 0)

print(r)
