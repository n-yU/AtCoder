from itertools import permutations

D, r = list(map(int, input().split())), 0
for B in permutations(list(map(int, input().split())), 3):
    t = 1
    for d, b in zip(D, B):
        t *= d // b
    r = max(r, t)
print(r)
