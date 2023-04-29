N = int(input())
A = list(map(lambda x: int(x) % 200, input().split()))
C, r = dict(), 0

for a in A:
    m = a % 200
    if C.get(m) is None:
        C[m] = 0
    C[m] += 1

for c in C.values():
    r += c * (c - 1) // 2
print(r)
