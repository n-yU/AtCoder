import bisect

s,t = input(),input()
n,nx,r = len(s),{},0

for i,c in enumerate(s+s):
	if nx.get(c) is None:
		nx[c] = []
	nx[c].append(i+1)

for c in t:
	l = nx.get(c)
	if l is None:
		print(-1)
		exit()
	r += l[bisect.bisect(l,r%n)]-r%n
print(r)