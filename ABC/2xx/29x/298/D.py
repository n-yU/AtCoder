from collections import deque
MOD = 998244353

n, d, s = int(input()), deque([1]), 1

for _ in range(n):
    q = list(map(int, input().split()))

    if q[0] == 1:
        d.append(q[1])
        s = (s * 10 + q[1]) % MOD
    elif q[0] == 2:
        s = (s - pow(10, len(d) - 1, MOD) * d.popleft()) % MOD
    else:
        print(s)
