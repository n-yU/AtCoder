n, d, h = map(int, input().split())
DH = [tuple(map(int, input().split())) for _ in range(n)]
r = 0

for td, th in DH:
    r = max(r, h - d * (h - th) / (d - td))
print(r)
