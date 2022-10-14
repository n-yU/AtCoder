N, S = int(input()), input()
P, R, skip = set(['{0}x{0}'.format(p) for p in 'aiueo']), [], 0

for i in range(N - 2):
    if skip == 0 and S[i:i + 3] in P:
        R.extend([i, i+1, i+2])
        skip += 3
    skip = max(skip - 1, 0)

R = set(R)
print(''.join([('.' if i in R else s) for i, s in enumerate(S)]))
