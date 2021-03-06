N = int(input())
r, A, B = int(1e9), [], []

for _ in range(N):
    a, b = map(int, input().split())
    r = min(r, a + b)
    A.append(a)
    B.append(b)

for i in range(N):
    for j in range(N):
        if i == j:
            continue
        r = min(r, max(A[i], B[j]))

print(r)
