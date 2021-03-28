N = int(input())
A = sorted(list(map(int, input().split())))
Q, T, S, r = [a * a for a in A], [0], [0], 0

for a, q in zip(A, Q):
    T.append(T[-1] + a)
    S.append(S[-1] + q)

for i in range(N):
    r += (S[-1] - S[i + 1]) - 2 * (T[-1] - T[i + 1]) * A[i] + (N - 1 - i) * (A[i] ** 2)

print(r)
