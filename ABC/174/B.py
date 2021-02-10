from math import sqrt

N,D = map(int,input().split())
c = 0
for _ in range(N):
	X,Y = map(int,input().split())
	if sqrt(X*X+Y*Y) <= D:
		c += 1
print(c)