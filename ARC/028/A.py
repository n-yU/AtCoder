N, A, B = map(int, input().split())
c = 0

while N > 0:
    c += 1
    N -= (A if c % 2 else B)
print('Ant' if c % 2 else 'Bug')
