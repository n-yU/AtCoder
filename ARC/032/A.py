from math import sqrt
n = int(input())
t = n * (n + 1) // 2
print('WANWAN' if sum([t % i == 0 for i in range(2, int(sqrt(t))+1)]) == 0 and t != 1 else 'BOWWOW')
