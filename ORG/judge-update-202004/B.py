N = int(input())
R, B = [], []

for _ in range(N):
    X, C = input().split()
    X = int(X)
    if C == 'R':
        R.append(X)
    else:
        B.append(X)

for r in sorted(R):
    print(r)
for b in sorted(B):
    print(b)
