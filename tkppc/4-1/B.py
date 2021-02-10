N, K = map(int, input().split())
A, r, t = list(map(int, input().split())), -1, 0

for i, a in enumerate(A):
    if a < K and a > t:
        t, r = a, i+1
print(r)
