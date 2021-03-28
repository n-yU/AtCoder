from math import sqrt

N, r = int(input()) * 2, 0
for i in range(1, int(sqrt(N)) + 1):
    if N % i == 0:
        a, b = i, N // i
        r += (a % 2) != (N // a % 2)
        if a != b:
            r += (b % 2) != (N // b % 2)
print(r)
