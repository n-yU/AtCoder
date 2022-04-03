N, L = map(int, input().split())
W, V = [], []
for _ in range(N):
    w, v = map(int, input().split())
    W.append(w)
    V.append(v)

v_mx = 100001
dp = [[1e10 for _ in range(v_mx + 1)] for _ in range(N + 1)]

for i in range(N):
    for j in range(v_mx):
        dp[i + 1][j] = min(dp[i + 1][j], dp[i][j])

        if (j == 0) or (dp[i][j] > 0 and dp[i][j] < 1e10):
            if j == 0:
                dp[i + 1][V[i]] = W[i]
            else:
                k = j + V[i]
                dp[i + 1][k] = min(dp[i][k], dp[i][j] + W[i])

print(max([(i, w) for i, w in enumerate(dp[N]) if (w > 0 and w <= L)])[0])
