N, r = int(input()), 0
for _ in range(N):
    s = list(map(int, input().split()))
    r = max(r, sum(s[:4])+s[4]*11/90)
print(r)
