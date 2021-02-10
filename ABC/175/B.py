from itertools import combinations

N = int(input())
L = list(map(int, input().split()))
c = 0

for p in combinations(L, 3):
    p = sorted(p)
    c += (len(p)==len(set(p)) and p[2]<p[0]+p[1])
print(c)