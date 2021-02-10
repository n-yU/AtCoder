N, L = map(int, input().split())
t, c = 1, 0

for s in input():
    t += 1 if s == '+' else -1
    if t > L:
        t = 1
        c += 1
print(c)
