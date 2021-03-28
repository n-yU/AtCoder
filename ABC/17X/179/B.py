N = int(input())
c = 0

for _ in range(N):
    D1, D2 = map(int, input().split())
    if D1 == D2:
        c += 1
        if c == 3:
            print('Yes')
            exit()
    else:
        c = 0
print('No')
