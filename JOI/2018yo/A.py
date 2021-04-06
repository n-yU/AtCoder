N, A, B, C, D = map(int, input().split())
X = (N // A + (N % A > 0)) * B
Y = (N // C + (N % C > 0)) * D
print(min(X, Y))
