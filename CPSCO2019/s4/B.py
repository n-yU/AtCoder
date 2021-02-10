from itertools import combinations

N,D = map(int,input().split())
S,r = [],[]
for _ in range(D):
	S.append(input())
print(max([bin(v[0] | v[1]).count('1') for v in list(combinations([int(s.translate(str.maketrans({'o':'1', 'x':'0'})),2) for s in S],2))]))