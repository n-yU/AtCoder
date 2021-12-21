N, S = int(input()), input()

X = [(i + 1) for i, s in enumerate(S) if s == '0']
l = len(X)

if l == 1:
    print(-1)
else:
    i, r = 0, []
    for j, s in enumerate(S):
        if s == '1':
            r.append(str(j + 1))
        else:
            r.append(str(X[(i + 1) % l]))
            i += 1
    print(' '.join(r))
