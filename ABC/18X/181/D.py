S, D = input(), {}

for s in S:
    if D.get(s) is None:
        D[s] = 1
    else:
        D[s] += 1

l = min(len(S), 3)
for n in range(0, 10 ** l, 8):
    P, b = {}, True
    X = str(n).zfill(l)
    for x in X:
        if P.get(x) is None:
            P[x] = 1
        else:
            P[x] += 1

    for pk, pv in P.items():
        if D.get(pk) is None or D[pk] < pv:
            b = False
            break
    
    if b:
        print('Yes')
        exit()
print('No')
