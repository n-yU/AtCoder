N, S = int(input()), input()
x = ['']
for c in S:
    if c in 'IO' and c != x[-1]:
        x.append(c)
print('Yes' if 'IOI' in ''.join(x) else 'No')
