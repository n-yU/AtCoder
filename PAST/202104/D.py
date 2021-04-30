n, k = map(int, input().split())
A = list(map(int, input().split()))
s = sum(A[:k])

print(s)
for i in range(n - k):
    s -= A[i] - A[i + k]
    print(s)
