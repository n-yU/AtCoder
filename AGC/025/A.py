N, r = int(input()), int(1e9)
for i in range(1, N // 2 + 1):
    A, B = i, N - i
    r = min(r, sum(list(map(int, str(A)))) + sum(list(map(int, str(B)))))
print(r)
