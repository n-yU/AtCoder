N = int(input())
A, B = list(map(int, input().split())), list(map(int, input().split()))

if sum([a * b for a, b in zip(A, B)]) == 0:
  print('Yes')
else:
  print('No')
