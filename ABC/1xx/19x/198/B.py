N, c = input(), 0
while c < len(N) and N[-c - 1] == '0':
    c += 1

if c > 0:
    N = N[:-c]
print('Yes' if N == N[::-1] else 'No')
