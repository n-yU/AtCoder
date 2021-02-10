N,A = int(input()),[]
for _ in range(N):
	A.append(int(input()))
B = sorted(A)

for x in A:
	print(B[N-2] if x==B[N-1] else B[N-1])