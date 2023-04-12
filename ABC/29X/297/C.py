H, W = map(int, input().split())
for _ in range(H):
    S = input()
    for i, s in enumerate(S[:-1]):
        if S[i] + S[i + 1] == 'TT':
            S = S[:i] + 'PC' + S[(i + 2):]
    print(S)
