n, m = map(int, [input(), input()])
A = list(map(lambda x: int(x) - 1, input().split()))
S = [0 for _ in range(n)]

for g in range(m):
    for p, b in enumerate(list(map(lambda x: int(x) - 1, input().split()))):
        S[p] += (b == A[g])
        S[A[g]] += (b != A[g])

print('\n'.join(map(str, S)))
