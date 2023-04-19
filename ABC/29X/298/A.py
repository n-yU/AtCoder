n, S = int(input()), input()

for s in S:
    if s == 'x':
        print('No')
        break
else:
    if 'o' in S:
        print('Yes')
    else:
        print('No')
