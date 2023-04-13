S, d = input(), 0

for s in S:
    if s == '(':
        d += 1
    else:
        d -= 1
    if d < 0:
        print('No')
        break
else:
    if d == 0:
        print('Yes')
    else:
        print('No')
