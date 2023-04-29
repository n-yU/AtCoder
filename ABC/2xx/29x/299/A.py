n, S = int(input()), input()
p1, p2, p3 = -1, -1, -1

for i in range(n):
    if p1 == -1 and S[i] == '|':
        p1 = i
    elif S[i] == '*':
        p2 = i
    elif S[i] == '|':
        p3 = i

if p1 < p2 < p3:
    print('in')
else:
    print('out')
