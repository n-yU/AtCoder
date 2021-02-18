from collections import deque

H, W = map(int, input().split())
r, c = map(lambda x: int(x) - 1, input().split())
S = [input() for _ in range(H)]
R = [[0] * W for _ in range(H)]

for h in range(H):
    for w in range(W):
        if S[h][w] == '#':
            R[h][w] = 2

d, s = deque(), set()
d.append((r, c))
s.add((r, c))
R[r][c] = 1

while len(d) > 0:
    tr, tc = d.popleft()
    for i, (dr, dc) in enumerate(zip([0, 0, -1, 1], [-1, 1, 0, 0])):
        nr, nc = tr + dr, tc + dc
        if (not (0 <= nr < H and 0 <= nc < W)) or ((nr, nc) in s):
            continue

        if S[nr][nc] in {'.', ['>', '<', 'v', '^'][i]}:
            s.add((nr, nc))
            R[nr][nc] = 1
            d.append((nr, nc))
        elif S[nr][nc] == '#':
            s.add((nr, nc))

for h in range(H):
    for w in range(W):
        if R[h][w] == 0:
            print('x', end='')
        elif R[h][w] == 1:
            print('o', end='')
        else:
            print('#', end='')
    print('')
