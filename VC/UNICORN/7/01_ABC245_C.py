N, K = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

dpA, dpB = [0 for _ in range(N)], [0 for _ in range(N)]
dpA[0], dpB[0] = 1, 1

for i in range(N - 1):
    dpA[i + 1] = (dpA[i] and abs(A[i + 1] - A[i]) <= K) or (dpB[i] and abs(A[i + 1] - B[i]) <= K)
    dpB[i + 1] = (dpA[i] and abs(B[i + 1] - A[i]) <= K) or (dpB[i] and abs(B[i + 1] - B[i]) <= K)

print('Yes' if (dpA[-1] or dpB[-1]) else 'No')
