from collections import deque

N,Q = map(int, input().split())
g,q,s,c,d = [[] for i in range(N)],[0]*N,[False]*N,[0]*N,deque()

for _ in range(N-1):
	a,b = map(lambda x: int(x)-1, input().split())
	g[a].append(b)
	g[b].append(a)

for _ in range(Q):
	p,x = map(int, input().split())
	q[p-1] += x

d.append(0)
while d:
	v = d.popleft()
	s[v] = True
	for x in g[v]:
		if not s[x]:
			d.append(x)
			q[x] += q[v]

print(' '.join(map(str,q)))