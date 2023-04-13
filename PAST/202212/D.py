n, m = map(int, input().split())
S, b, P = input(), 0, [0 for _ in range(n)]

for i, s in enumerate(S):
    x = i % n
    P[x] += 1

    if s == '+':
        P[x] += b
        b = 0
    elif s == '-':
        b += P[x]
        P[x] = 0

print('\n'.join(map(str, P)))
