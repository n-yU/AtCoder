C = dict(zip(['O', 'D', 'I', 'Z', 'S', 'B'], ['0', '0', '1', '2', '5', '8']))
for s in input():
    if C.get(s) is None:
        print(s, end='')
    else:
        print(C[s], end='')
print()
