N,r = int(input()),0
for _ in range(N):
	A,B = map(int,input().split())
	r += max(A,B)
print(r)