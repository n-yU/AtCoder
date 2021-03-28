S = input()
for i, s in enumerate(S):
    if (i % 2 == 0 and s.isupper()) or (i % 2 and s.islower()):
        print('No')
        break
else:
    print('Yes')
