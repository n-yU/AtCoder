from math import ceil
A, B, W = map(int, input().split())
mn = int(ceil(W * 1000 / B))
mx = W * 1000 // A
print('{} {}'.format(mn, mx) if mn <= mx else 'UNSATISFIABLE')
