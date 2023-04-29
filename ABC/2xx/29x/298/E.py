MOD = 998244353


def modinv(a: int, m: int):
    b, u, v = m, 1, 0
    while b:
        t = a // b
        a, u = a - t * b, u - t * v
        a, b, u, v = b, a, v, u

    u %= m
    u += m * (u < 0)
    return u


n, a, b, p, q = map(int, input().split())
dp = [[[0, 0] for _ in range(n + 1)] for _ in range(n + 1)]
for i in range(n):
    for k in [0, 1]:
        dp[n][i][k], dp[i][n][k] = 1, 0

for i in range(n - 1, 0, -1):
    for j in range(n - 1, 0, -1):
        for k in range(1, p + 1):
            dp[i][j][0] += dp[min(i + k, n)][j][1]
        dp[i][j][0] = dp[i][j][0] * modinv(p, MOD) % MOD
        for k in range(1, q + 1):
            dp[i][j][1] += dp[i][min(j + k, n)][0]
        dp[i][j][1] = dp[i][j][1] * modinv(q, MOD) % MOD

print(dp[a][b][0])
