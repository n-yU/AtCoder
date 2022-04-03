N, L = map(int, input().split())
W, V = [], []
for _ in range(N):
    w, v = map(int, input().split())
    W.append(w)
    V.append(v)

dp = [[0 for _ in range(L + 1)] for _ in range(N + 1)]
for i in range(N):
    for j in range(L):
        dp[i + 1][j] = max(dp[i + 1][j], dp[i][j])

        if (j == 0) or (dp[i][j] > 0):
            k = j + W[i]
            if k <= L:
                dp[i + 1][k] = max(dp[i][k], dp[i][j] + V[i])

print(max(dp[N]))
