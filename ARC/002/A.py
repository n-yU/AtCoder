Y = int(input())

if Y % 400 == 0:
    b = True
elif Y % 100 == 0:
    b = False
elif Y % 4 == 0:
    b = True
else:
    b = False
print('YES' if b else 'NO')
