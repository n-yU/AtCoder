N, S, D = map(int, input().split())
r = 0

for _ in range(N):
    X, Y = map(int, input().split())
    if X < S and Y > D:
        r = 1

print('Yes' if r else 'No')
