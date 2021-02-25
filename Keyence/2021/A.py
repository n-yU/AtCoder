N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = [0 for _ in range(N)]

C[0], m = A[0] * B[0], A[0]
print(C[0])
for i, (a, b) in enumerate(zip(A[1:], B[1:])):
    m = max(m, a)
    C[i + 1] = max(C[i], m * b)
    print(C[i + 1])
