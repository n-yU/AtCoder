A, B = map(int, input().split())
c = 0

while A != B:
    if A < B:
        A, B = B, A
    if A % B:
        c += A // B
        A %= B
    else:
        c += A // B - 1
        break

print(c)
