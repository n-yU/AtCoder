N = int(input())
c1, c2, c3, c4, c5, c6 = 0, 0, 0, 0, 0, 0
for _ in range(N):
    M, m = map(float, input().split())

    if M >= 35:
        c1 += 1
    elif M >= 30:
        c2 += 1
    elif M >= 25:
        c3 += 1

    if m >= 25:
        c4 += 1
    elif M >= 0 and m < 0:
        c5 += 1
    elif M < 0:
        c6 += 1

print(c1, c2, c3, c4, c5, c6)
