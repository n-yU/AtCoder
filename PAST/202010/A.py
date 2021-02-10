A, B, C = map(int, input().split())
if A in list(range(min(B, C), max(B, C) + 1)):
  print('A')
elif B in list(range(min(A, C), max(A, C) + 1)):
  print('B')
else:
  print('C')
