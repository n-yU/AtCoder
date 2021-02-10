from math import floor

X, Y = map(float, input().split())
if Y == 0:
  print('ERROR')
else:
  print('{:.2f}'.format(floor(X * 100 / Y) / 100))
