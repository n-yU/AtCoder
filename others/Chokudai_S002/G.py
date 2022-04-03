def gcd(a,b):
	if b > a:
		a,b = b,a
	r = a%b
	while r > 0:
		a,b = b,r
		r = a%b
	return b

N = int(input())
for _ in range(N):
	A,B = map(int,input().split())
	print(gcd(A,B))