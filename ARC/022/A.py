p, i = ['I', 'C', 'T'], 0
for c in input().upper():
    if c == p[i]:
        i += 1
        if i == 3:
            print('YES')
            exit()
print('NO')
