from bisect import bisect_left

n, m, q = map(int, input().split())
WV = sorted([tuple(map(int, input().split())) for _ in range(n)], key=lambda x: x[1])[::-1]
X = list(map(int, input().split()))

for _ in range(q):
    l, r = map(int, input().split())
    B, a = sorted(X[:(l - 1)] + X[r:]), 0

    for w, v in WV:
        if not len(B):
            break

        i = bisect_left(B, w)
        if i == len(B):
            continue

        a += v
        B.pop(i)

    print(a)
