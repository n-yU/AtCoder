N = int(input())
T, D = list(range(N)), 0

for i in range(N):
  a, b = map(int, input().split())
  T[i] = a * 2 + b
  D += a

for i, t in enumerate(sorted(T, reverse=True)):
  D -= t
  if D < 0:
    print(i + 1)
    exit()
