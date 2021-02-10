N = int(input())
r = 0

for n in range(N):
	d = N//(n+1)
	r += d*(d+1)*(n+1)//2
print(r)