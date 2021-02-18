from copy import copy

N, M, K = map(int, input().split())
S = [input() for _ in range(N)]
C = [[dict(zip(list(range(10)), [0] * 10)) for j in range(M + 1)] for i in range(N + 1)]

for i in range(1, N + 1):
    for j in range(1, M + 1):
        C[i][j] = copy(C[i][j - 1])
        C[i][j][int(S[i - 1][j - 1])] += 1

for j in range(1, M + 1):
    for i in range(1, N + 1):
        for k, v in C[i - 1][j].items():
            C[i][j][k] += v

for n in range(min(N, M), 0, -1):
    for i in range(N - n + 1):
        for j in range(M - n + 1):
            r = dict(zip(list(range(10)), [0] * 10))
            for (k, v1), (_, v2), (_, v3), (_, v4) in zip(
                    C[i + n][j + n].items(), C[i][j + n].items(), C[i + n][j].items(), C[i][j].items()):
                r[k] += v1 - v2 - v3 + v4

            r = sorted(r.items(), key=lambda x: -x[1])
            if n * n - r[0][1] <= K:
                print(n)
                exit()
