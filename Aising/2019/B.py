N = int(input())
A,B = map(int, input().split())
P = list(map(int, input().split()))
q1,q2,q3 = 0,0,0

for x in P:
	if x<=A:
		q1 += 1
	elif x<=B:
		q2 += 1
	else:
		q3 += 1

print(min(q1,q2,q3))