N, h = int(input()), list(map(int, input().split()))
dp = [1e9 for _ in range(N)]

dp[0] = 0
for i in range(N - 2):
    dp[i + 1] = min(dp[i + 1], dp[i] + abs(h[i + 1] - h[i]))
    dp[i + 2] = min(dp[i + 2], dp[i] + abs(h[i + 2] - h[i]))

print(min(dp[N - 1], dp[N - 2] + abs(h[N - 1] - h[N - 2])))
