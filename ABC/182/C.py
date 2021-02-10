from itertools import combinations

N = [int(n) for n in input()]
for p in range(len(N)):
    for v in combinations(N, len(N) - p):
        if sum(v) % 3 == 0:
            print(p)
            exit()
print(-1)
