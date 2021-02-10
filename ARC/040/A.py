N = int(input())
R, B = 0, 0
for _ in range(N):
    S = input()
    R += sum([c == 'R' for c in S])
    B += sum([c == 'B' for c in S])

if R > B:
    print('TAKAHASHI')
elif R < B:
    print('AOKI')
else:
    print('DRAW')
