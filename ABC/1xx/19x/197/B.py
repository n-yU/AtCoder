H, W, X, Y = map(int, input().split())
S = [input() for _ in range(H)]
X, Y, c = X - 1, Y - 1, 0

p, q = X, Y
while p > -1 and S[p][q] == '.':
    c += 1
    p -= 1

p = X
while p < H and S[p][q] == '.':
    c += 1
    p += 1

p = X
while q > -1 and S[p][q] == '.':
    c += 1
    q -= 1

q = Y
while q < W and S[p][q] == '.':
    c += 1
    q += 1

print(c - 3)
