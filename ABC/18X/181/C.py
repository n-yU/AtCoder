from itertools import combinations

N = int(input())
X, Y = list(range(N)), list(range(N))
for i in range(N):
    X[i], Y[i] = map(int, input().split())

for c in combinations(list(range(N)), 3):
    x1, y1, x2, y2, x3, y3 = X[c[0]], Y[c[0]], X[c[1]], Y[c[1]], X[c[2]], Y[c[2]]
    if (x1 - x3) * (y2 - y3) == (x2 - x3) * (y1 - y3):
        print('Yes')
        exit()
print('No')
