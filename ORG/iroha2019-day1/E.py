N, A, B = map(int, input().split())
D = sorted(list(map(int, input().split()))) if B != 0 else []
c, p = 0, 0

for d in D:
    c += (d - p) // A - ((d - p) % A == 0)
    p = d
print(N - c - len(D) - (N - p) // A)
