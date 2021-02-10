A, B, C, S = int(input()), int(input()), int(input()), int(input())
print('Yes' if S in list(range(A + B + C, A + B + C + 4)) else 'No')
