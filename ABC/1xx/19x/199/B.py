N = int(input())
A = list(map(lambda x: int(x) - 1, input().split()))
B = list(map(lambda x: int(x) - 1, input().split()))
T, x, r = [0 for _ in range(1001)], 0, 0

for a, b in zip(A, B):
    T[a] += 1
    T[b + 1] -= 1

for t in T:
    x += t
    if x == N:
        r += 1
print(r)
