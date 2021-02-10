X, Y, A, B = map(int, input().split())
c = 0

while(X < Y):
    if X * (A - 1) < B:
        X *= A
    else:
        c += (Y - X) // B + ((Y - X) % B != 0)
        break
    c += 1

print(c - 1)
