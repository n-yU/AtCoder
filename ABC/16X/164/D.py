from collections import Counter

def modpow(a, n, m):
	r = 1
	while n > 0:
		if n & 1:
			r = r*a%m
		a = a*a%m
		n >>= 1
	return r

S,r = input(),0
dp = list(range(len(S)+1))
dp[-1],dp[-2] = 0,int(S[-1])

for i in range(3,len(S)+2):
	dp[-i] = (dp[-i+1] + modpow(10,i-2,2019)*int(S[-i+1])) % 2019

for x in Counter(dp).values():
	r += x*(x-1)//2
print(r)