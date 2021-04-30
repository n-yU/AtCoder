n, m = map(int, input().split())
A = [None for _ in range(n)]
for i in range(n):
    ka = list(map(int, input().split()))
    A[i] = set(ka[1:])

p, q = map(int, input().split())
B, r = set(map(int, input().split())), 0

for a in A:
    if len(a & B) >= q:
        r += 1
print(r)
