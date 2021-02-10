def modpow(a, n, m):
    r = 1
    while n > 0:
        if n & 1:
            r = r*a % m
        a = a*a % m
        n >>= 1
    return r

N = int(input())
X = input()
d = sum([y == '1' for y in X])
A,B = 0,0
f = list([0 for _ in range(N+1)])

for i in range(N):
	if X[i] == '1':
		if not d==1:
			A += modpow(2, N-i-1, d-1)
		B += modpow(2, N-i-1, d+1)
	t,c = i+1,0
	for j in range(18):
		if t & 1<<j:
			c += 1
	f[t] = f[t%c]+1

for i in range(N):
	c = 0
	if X[i]=='1' and not d==1:
		c = f[(A-modpow(2,N-i-1,d-1))%(d-1)]+1
	elif X[i] == '0':
		c = f[(B+modpow(2,N-i-1,d+1))%(d+1)]+1
	print(c)