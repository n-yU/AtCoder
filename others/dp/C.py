N, ABC = int(input()), []
for _ in range(N):
    ABC.append(tuple(map(int, input().split())))

dp = [[0 for _ in range(3)] for _ in range(N + 1)]
for i in range(N):
    for j in range(3):
        dp[i + 1][j] = max(dp[i + 1][j], max(dp[i][(j + 1) % 3], dp[i][(j + 2) % 3]) + ABC[i][j])

print(max(dp[N][0], max(dp[N][1], dp[N][2])))
