N = int(input())
m = 0
for _ in range(N):
    A, B = map(int, input().split())
    m = max(m, A+B)
print(m)
