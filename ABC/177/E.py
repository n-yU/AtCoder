def mygcd(a: int, b: int):
    if a < b:
        a, b = b, a
    while a % b != 0:
        a, b = b, a % b
    return b

N = int(input())
A = sorted(list(map(int, input().split())))
C = [0] * (A[N - 1] + 1)

for a in A:
    C[a] += 1
for i in range(2, A[N - 1] + 1):
    t, s = i, 0
    while t <= A[N - 1]:
        s += C[t]
        t += i
    if s > 1:
        break
    if i == A[N - 1]:
        print('pairwise coprime')
        exit()

if C[1] == N:
    print('pairwise coprime')
    exit()

g = A[0]
for i in range(N - 1):
    g = mygcd(g, A[i + 1])
print('setwise coprime' if g == 1 else 'not coprime')
