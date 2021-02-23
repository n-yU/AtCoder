N = int(input())
A = list(map(int, input().split()))
s, m, x, r = sum(A), int(1e15), 0, 0
A.extend(A)

for l in range(N):
    while x <= s - x:
        x += A[r]
        r += 1
        m = min(m, abs(s - x * 2))
    x -= A[l]

print(m)
