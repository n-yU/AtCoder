N, M = map(int, input().split())
A, s = list(range(M)), set()

for i in range(M):
    A[i] = int(input())
A = reversed(A)

for a in A:
    if a not in s:
        print(a)
        s.add(a)
for x in range(1, N+1):
    if x not in s:
        print(x)
