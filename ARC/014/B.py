N = int(input())
s, W = set(), input()
s.add(W)
p = W[-1]

for i in range(N-1):
    W = input()
    if p != W[0] or W in s:
        print('LOSE' if i % 2 else 'WIN')
        exit()
    s.add(W)
    p = W[-1]
print('DRAW')
