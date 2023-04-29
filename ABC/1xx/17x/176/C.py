N = int(input())
A = list(map(int, input().split()))
m,s = 0,0

for a in A:
    s += max(m-a,0)
    m = max(m, a)
print(s)