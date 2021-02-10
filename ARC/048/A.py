A,B = map(int, input().split())
r = B - A
if A < 0 and B > 0:
  r -= 1
print(r)
