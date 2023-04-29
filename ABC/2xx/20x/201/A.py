A = sorted(list(map(int, input().split())))
print('Yes' if A[1] - A[0] == A[2] - A[1] else 'No')
