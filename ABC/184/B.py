N, X = map(int, input().split())
S = input()

for c in S:
    X += 1 if c == 'o' else -1
    if X < 0:
        X = 0
print(X)
