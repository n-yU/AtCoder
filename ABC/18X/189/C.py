N = int(input())
A = list(map(int, input().split()))
r = 0

for i in range(N):
    m = A[i]
    for j, a in enumerate(A[i:]):
        m = min(a, m)
        r = max(r, m * (j + 1))

print(r)
