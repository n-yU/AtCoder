from itertools import combinations


def get_ternary(n: int) -> str:
    if n // 3:
        return get_ternary(n // 3) + str(n % 3)
    return str(n % 3)


N = int(input())
A = [[0 for _ in range(N)] for _ in range(N)]
for i in range(N - 1):
    for j, a in enumerate(list(map(int, input().split()))):
        A[i][i + j + 1] = a
for i in range(1, N):
    for j in range(i):
        A[i][j] = A[j][i]

l = int(-1e9)
for i in range(3 ** N):
    x, t = 0, get_ternary(i)
    t = ''.join(['0' for _ in range(N - len(t))]) + t

    for j in '012':
        g = [k for k, e in enumerate(t) if e == j]
        for e1, e2 in combinations(g, 2):
            x += A[e1][e2]

    l = max(l, x)

print(l)
