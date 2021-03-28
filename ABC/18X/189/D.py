N = int(input())
S = [(True if input() == 'OR' else False) for _ in range(N)]
r = 0

for i, s in enumerate(S[::-1]):
    if s:
        r += 2 ** (N - i)
print(r + 1)
