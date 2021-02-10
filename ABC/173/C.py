H,W,K = map(int,input().split())
c,ch,cw,a=[],[],[0]*6,0

for _ in range(H):
	t = input()
	c.append(t)
	ch.append(sum([x=='#' for x in t]))
for j in range(W):
	for i in range(H):
		if c[i][j] == '#':
			cw[j] += 1

for i in range(1<<H):
	for j in range(1<<W):
		s,si,sj=0,[],[]
		for d in range(H):
			if i & 1<<d:
				si.append(d)
				s += ch[d]
		for d in range(W):
			if j & 1<<d:
				sj.append(d)
				s += cw[d]
		for p in si:
			for q in sj:
				if c[p][q] == '#':
					s -= 1
		if sum(ch)-s == K:
			a += 1
print(a)