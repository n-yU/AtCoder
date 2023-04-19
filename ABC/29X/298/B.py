from copy import deepcopy

n = int(input())
A, B = [], []
for _ in range(n):
    A.append(list(map(int, input().split())))
for _ in range(n):
    B.append(list(map(int, input().split())))

for _ in range(4):
    for i in range(n):
        for j in range(n):
            if A[i][j] and (not B[i][j]):
                break
        else:
            continue
        break
    else:
        print('Yes')
        break

    C = deepcopy(A)
    for i in range(n):
        for j in range(n):
            A[i][j] = C[n - j - 1][i]
else:
    print('No')
