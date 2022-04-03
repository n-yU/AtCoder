N, K = map(int, input().split())
h = list(map(int, input().split()))
dp = [1e9 for _ in range(N)]

dp[0] = 0
for i in range(max(N - 1, 1)):
    for j in range(i, min(i + K, N - 1)):
        k = j + 1
        dp[k] = min(dp[k], dp[i] + abs(h[k] - h[i]))

print(dp[N - 1])
