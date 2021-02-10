N,p,t = int(input()),0,1
for _ in range(N):
	i = list(input().split())
	c,a = i[0],int(i[1])
	if c == '+':
		p += a
	elif c == '*' and not a == 0:
		t *= a
print(p*t)