dh, dw = [0, 0, -1, 1], [-1, 1, 0, 0]


def dfs(s, i, j, l):
    global S, k
    l.append((i, j))
    s.add((i, j))
    t = len(l)

    if len(l) == k:
        print(k)
        print('\n'.join(['{} {}'.format(s1 + 1, s2 + 1) for s1, s2 in l]))
        exit()

    for h, w in zip(dh, dw):
        nh, nw = i + h, j + w
        if not (0 <= nh < H and 0 <= nw < W) or S[nh][nw] == '.' or (nh, nw) in s:
            continue
        l = dfs(s, nh, nw, l)

    if len(l) == t:
        l = l[:-1]
        s.remove((i, j))
    return l


H, W = map(int, input().split())
S = [input() for _ in range(H)]
k = sum([S[i][j] == '#' for i in range(H) for j in range(W)])

for i in range(H):
    for j in range(W):
        if S[i][j] == '.':
            continue
        s, l = set(), list()
        dfs(s, i, j, l)
