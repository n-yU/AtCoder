N, r = int(input()), str()
for _ in range(N // 9 + 1 - (0 if N % 9 != 0 else 1)):
    r += str(N % 9 if N % 9 != 0 else 9)
print(r)
