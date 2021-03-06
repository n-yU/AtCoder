N = int(input())
r = 0

for i in range(1, N):
    r += N / (N - i)
print(r)
