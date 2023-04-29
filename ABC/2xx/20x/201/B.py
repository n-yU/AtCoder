n = int(input())
M = [tuple() for _ in range(n)]

for i in range(n):
    s, t = input().split()
    M[i] = (int(t), s)
print(sorted(M)[-2][1])
