A, B, C = map(int, input().split())
x = [int(str(A ** i)[-1]) for i in range(1, 5)]
y = [B % 4, B ** 2 % 4]

if B % 4 == 2 and C % 2 and C > 1:
    print(x[-1])
else:
    print(x[y[C % 2 - 1] - 1])
