N = int(input())
A = sorted(list(map(int, input().split())))
m, r = min(A), 0
if m < 0:
    A = [a - m for a in A]
s = sum(A)

for i, a in enumerate(A):
    s -= a
    r += s - a * (N - 1 - i)
print(r)
