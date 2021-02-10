N = int(input())
_, A = input(), set(input().split())

for _ in range(N - 1):
  k = input()
  A &= set(input().split())
print(len(A))
