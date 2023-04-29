def get_shapes(G):
    global N
    sp = set()

    for i in range(N):
        for j in range(N):
            if G[i][j] == '#':
                sp.add((i, j))

    return sp


N = int(input())
S = get_shapes([input() for _ in range(N)])
T = get_shapes([input() for _ in range(N)])

for _ in range(4):
    msi, msj = min(S)
    mti, mtj = min(T)

    if set((i - msi, j - msj) for i, j in S) == set((i - mti, j - mtj) for i, j in T):
        print('Yes')
        exit()
    
    T = set((j, -i) for i, j in T)

print('No')
