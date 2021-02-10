N, M, A, B = map(int, input().split())
T, r, x = [0 for _ in range(N + 1)], 0, 0

for _ in range(M):
    L, R = map(int, input().split())
    T[L - 1] += 1
    T[R] -= 1

for t in T[:-1]:
    x += t
    r += A if x > 0 else B
print(r)
