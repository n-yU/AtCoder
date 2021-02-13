from collections import deque

dh, dw = [0, 0, -1, 1], [-1, 1, 0, 0]

N, M = map(int, input().split())
S = [input() for _ in range(N)]
W, r = sum([S[i][j] == '.' for i in range(N) for j in range(M)]), 0

for i in range(N):
    for j in range(M):
        if S[i][j] == '.':
            continue

        s, d, c = {(i, j)}, deque(), 0
        d.appendleft((i, j))

        while len(d):
            x, y = d.pop()
            for h, w in zip(dh, dw):
                nx, ny = x + h, y + w

                if not(0 <= nx < N and 0 <= ny < M) or (nx, ny) in s or S[nx][ny] == '#':
                    s.add((nx, ny))
                    continue

                s.add((nx, ny))
                d.appendleft((nx, ny))
                c += 1

        if c == W:
            r += 1
print(r)
