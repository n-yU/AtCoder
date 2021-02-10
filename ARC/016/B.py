N = int(input())
r = 0
p = set()

for _ in range(N):
    X = input()
    r += sum([x == 'x' for x in X])
    for i, x in enumerate(X):
        if x == 'o':
            if i not in p:
                r += 1
            p.add(i)
        else:
            if i in p:
                p.remove(i)
print(r)
