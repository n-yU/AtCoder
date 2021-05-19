n, m = map(int, input().split())
A = list(map(int, [input() for _ in range(n)]))
V = dict()

for b in list(map(int, [input() for _ in range(m)])):
    for i, a in enumerate(A):
        if a <= b:
            if V.get(i) is None:
                V[i] = 0
            V[i] += 1
            break

print(sorted(V.items(), key=lambda x: x[1])[::-1][0][0] + 1)
