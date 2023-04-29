N = int(input())
A = list(map(int, input().split()))
r = 2 ** 30

for i in range(2 ** (N - 1)):
    x, y = A[0], 0
    for j in range(N - 1):
        if (i >> j) & 1:
            y ^= x
            x = A[j + 1]
        else:
            x |= A[j + 1]

    r = min(r, (y ^ x))

print(r)
