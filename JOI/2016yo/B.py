n, m = map(int, input().split())
A = [int(input()) for _ in range(n)]

for k in range(1, m + 1):
    for i in range(n - 1):
        if A[i] % k > A[i + 1] % k:
            A[i], A[i + 1] = A[i + 1], A[i]

print('\n'.join(map(str, A)))
