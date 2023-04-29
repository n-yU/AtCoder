n, t = map(int, input().split())
C, R = list(map(int, input().split())), list(map(int, input().split()))
w, s = 0, -1

if t not in C:
    t = C[0]

for i in range(n):
    if C[i] == t and R[i] > s:
        s, w = R[i], i + 1
print(w)
