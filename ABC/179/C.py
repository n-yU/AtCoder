N = int(input())
r = 0

for i in range(1, N):
    r += N // i - (N % i == 0)
print(r)
