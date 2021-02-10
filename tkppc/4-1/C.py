N, X = input().split()
N = int(N)

for i in range(2, 11):
    t, d = N, ''

    while t > 0:
        d += str(t % i)
        t //= i

    if d[::-1] == X:
        print(i)
        exit()
