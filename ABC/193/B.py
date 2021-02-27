N = int(input())
r = int(1e9)

for _ in range(N):
    a, p, x = map(int, input().split())
    if x - a > 0:
        r = min(r, p)

print(-1 if r == 1e9 else r)
