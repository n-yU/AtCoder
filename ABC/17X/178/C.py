N = int(input())
M = 1000000007
t, t1, t2 = 1, 1, 1

for _ in range(N):
    t, t1, t2 = t*10, t1*9, t2*8
    t, t1, t2 = t%M, t1%M, t2%M

print((t - t1*2 + t2) % M)
