N, M, T = map(int, input().split())
p, b = 0, N

for _ in range(M):
    A, B = map(int, input().split())
    b -= A - p
    if b <= 0:
        print('No')
        exit()
    b, p = min(b + B - A, N), B

print('Yes' if b - T + p > 0 else 'No')
