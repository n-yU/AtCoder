from itertools import permutations

N, S = input(), input()
for s in permutations(S):
    t = ''.join(s)
    if S != t and S != t[::-1]:
        print(t)
        exit()
print('None')
