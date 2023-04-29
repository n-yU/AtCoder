n, S = int(input()), input()

d1, c1, f1, d2, c2, f2 = 0, 0, 0, 0, 0, 0
for i in range(n):
    if S[i] == '-':
        d1 = max(d1, c1)
        f1, c1 = 1, 0
    elif f1:
        c1 += 1

    if S[n - i - 1] == '-':
        d2 = max(d2, c2)
        f2, c2 = 1, 0
    elif f2:
        c2 += 1

d1, d2 = max(d1, c1), max(d2, c2)
if (f1 or f2) and (d1 or d2):
    print(max(d1, d2))
else:
    print(-1)
