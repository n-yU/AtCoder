N, S = int(input()), input()
C, r = dict(J=0, O=0, I=0), ''

for s in S:
    C[s] += 1
for c in ['J', 'O', 'I']:
    r += c * C[c]
print(r)
