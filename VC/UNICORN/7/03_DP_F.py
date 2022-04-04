S, T = input(), input()
dp = [['' for _ in range(len(T) + 1)] for _ in range(len(S) + 1)]

for i, s in enumerate(S):
    for j, t in enumerate(T):
        if len(dp[i + 1][j]) > len(dp[i + 1][j + 1]):
            dp[i + 1][j + 1] = dp[i + 1][j]
        if len(dp[i][j + 1]) > len(dp[i + 1][j + 1]):
            dp[i + 1][j + 1] = dp[i][j + 1]
        if s == t:
            if len(dp[i][j]) + 1 > len(dp[i + 1][j + 1]):
                dp[i + 1][j + 1] = dp[i][j] + S[i]

print(dp[-1][-1])
