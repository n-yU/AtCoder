N,A,B,C = int(input()),input(),input(),input()
r = 0

for i in range(N):
	if not(A[i]==B[i]) and not(B[i]==C[i]) and not(C[i]==A[i]):
		r += 2
	elif not(A[i]==B[i] and B[i]==C[i]):
		r += 1
print(r)