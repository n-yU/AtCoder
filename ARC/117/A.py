a, b = map(int, input().split())
if a < b:
    E = [- i - 1 for i in range(b)] + [i + 1 for i in range(a - 1)]
    E.append(- sum(E))
else:
    E = [i + 1 for i in range(a)] + [- i - 1 for i in range(b - 1)]
    E.append(- sum(E))
print(' '.join(map(str, E)))
