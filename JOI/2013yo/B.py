N = int(input())
S = [list(map(int, input().split())) for _ in range(N)]
R = [0 for _ in range(N)]

for i in range(3):
    for j in range(N):
        for k in range(N):
            if k != j and S[j][i] == S[k][i]:
                break
        else:
            R[j] += S[j][i]

print('\n'.join(map(str, R)))
