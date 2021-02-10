H, W = map(int, input().split())
S, T, c = [str() for _ in range(H)], [str() for _ in range(W)], 0

for i in range(H):
    S[i] = input()
for j in range(W):
    t = str()
    for i in range(H):
        t += S[i][j]
    T[j] = t

for s in S:
    for p in s.split('#'):
        c += max(len(p) - 1, 0)
for t in T:
    for p in t.split('#'):
        c += max(len(p) - 1, 0)

print(c)
