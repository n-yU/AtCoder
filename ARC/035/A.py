S = input()
for s, r in zip(S, S[::-1]):
    if s != r and s != '*' and r != '*':
        print('NO')
        exit()
print('YES')
