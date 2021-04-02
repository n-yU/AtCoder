N, A = int(input()), list(map(int, input().split()))
p, c, r = 0, 0, 0

for a in A:
    if a >= p:
        c += 1
    else:
        r = max(r, c)
        c = 1
    p = a

print(max(r, c))
