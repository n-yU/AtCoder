N = int(input())
T, r, x = [0] * 1000002, 0, 0

for _ in range(N):
    A, B = map(int, input().split())
    T[A] += 1
    T[B + 1] -= 1

for i, t in enumerate(T):
    x += t
    r += i * x
print(r)
