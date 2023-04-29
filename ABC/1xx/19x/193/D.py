K, S, T = int(input()), dict(zip(list(range(1, 10)), [0] * 10)), dict(zip(list(range(1, 10)), [0] * 10))

for s, t in zip(input()[:4], input()[:4]):
    S[int(s)] += 1
    T[int(t)] += 1

st, sa = sum([k * (10 ** v) for k, v in S.items()]), sum([k * (10 ** v) for k, v in T.items()])
C, r = dict(zip(list(range(1, 10)), [0] * 10)), 0

for (k, v1), (_, v2) in zip(S.items(), T.items()):
    C[k] += v1 + v2

for i in range(1, 10):
    rc1 = K - C[i]
    if rc1 == 0:
        continue
    stt = sum([k * (10 ** (v + (k == i))) for k, v in S.items()])

    for j in range(1, 10):
        rc2 = K - C[j] - (i == j)
        if rc2 == 0:
            continue
        saa = sum([k * (10 ** (v + (k == j))) for k, v in T.items()])

        if stt > saa:
            r += rc1 * rc2 / (((K - 1) * 9) * (K * 9 - 8))

print(r)
