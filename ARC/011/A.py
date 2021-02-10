m, n, N = map(int, input().split())
c = N

while N >= m:
    N -= m - n
    c+= n
print(c)
