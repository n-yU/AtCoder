n = int(input())
A = list(map(int, input().split()))
M = set()

for i in range(n - 2):
    for j in range(i + 1, n - 1):
        for k in range(j + 1, n):
            M.add(A[i] * A[j] * A[k])

print(len(M))
