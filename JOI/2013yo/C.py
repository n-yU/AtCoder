N, r = int(input()), 0
S = input()
lS = len(S)

for _ in range(N):
    B = input()
    lB = len(B)
    for d in range(0, (lB - lS) // (lS - 1) + 1):
        for i in range(lB - (lS - 1) * (d + 1)):
            if ''.join([B[i + (d + 1) * j] for j in range(lS)]) == S:
                r += 1
                break
        else:
            continue
        break

print(r)
