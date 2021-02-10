N = int(input())
print('Not Prime' if N not in [2, 3, 5] and (N == 1 or N % 2 == 0 or N % 3 == 0 or N % 5 == 0) else 'Prime')
