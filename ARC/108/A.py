from math import sqrt

S, P = map(int, input().split())
c = 0

for i in range(1, int(sqrt(P)) + 1):
    if P % i == 0 and i + P // i == S:
        print('Yes')
        exit()
print('No')
