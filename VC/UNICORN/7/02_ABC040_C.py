N = int(input())
A = list(map(int, input().split()))
dp = [0 for _ in range(N)]

dp[1] = abs(A[1] - A[0])
for i in range(N - 2):
    dp[i + 2] = min(abs(A[i + 2] - A[i]) + dp[i], abs(A[i + 2] - A[i + 1]) + dp[i + 1])

print(dp[-1])
