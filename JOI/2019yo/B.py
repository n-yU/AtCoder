N, X = int(input()), list(map(int, input().split()))
M, A = int(input()), list(map(lambda x: int(x) - 1, input().split()))

for a in A:
    if X[a] + 1 not in set(X):
        X[a] = min(X[a] + 1, 2019)

print('\n'.join(map(str, X)))
