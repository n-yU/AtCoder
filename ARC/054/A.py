L, X, Y, S, D = map(int, input().split())
if S < D:
    r1 = (D - S) / (X + Y)
    r2 = (S + L - D) / (Y - X) if Y - X != 0 else -1
else:
    r1 = (L - S + D) / (X + Y)
    r2 = (S - D) / (Y - X) if Y - X != 0 else -1
print(r1 if r2 < 0 else min(r1, r2))
