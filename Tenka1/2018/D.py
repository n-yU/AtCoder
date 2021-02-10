import math

N = int(input())
k,S,t = int(math.sqrt(N*2))+1,[[1],[1]],[]

if k*(k-1) != N*2:
	print('No')
	exit()

for i in range(k-2):
	S[0].append(S[0][i]+i+1)
	S[1].append(S[1][i]+i+2)
	t.append([S[0][i+1]])

for i in range(k-2):
	b,n = False,t[i][-1]+1
	while n <= N:
		t[i].append(n)
		tk = int(math.sqrt(n*2))+1
		if tk*(tk-1) == n*2:
			b = True
		n = t[i][-1]+len(t[i]) if b else t[i][-1]+1
S += t

print('Yes')
print(k)
for s in S:
	print(k-1, ' '.join(map(str, s)))