N, X, Y = map(int, input().split())
A = sorted(list(map(int, input().split())), reverse=True)

for i, a in enumerate(A):
    if i%2 == 0:
        X += a
    else:
        Y += a

if X == Y:
    print('Draw')
else:
    print('Takahashi' if X > Y else 'Aoki')