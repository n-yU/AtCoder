N, S = int(input()), []

for i in range(N):
    S.append(''.join(list(reversed(input()))))
for s in sorted(S):
    print(''.join(list(reversed(s))))
