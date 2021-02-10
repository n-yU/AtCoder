from math import sqrt
N = int(input())
print('YES' if sum([N % i == 0 for i in range(2, int(sqrt(N))+1)]) == 0 else 'NO')
