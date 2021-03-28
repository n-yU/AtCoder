N,M,K = map(int, input().split())
A = [0] + list(map(int, input().split()))
B = [0] + list(map(int, input().split()))

for i in range(N):
	A[i+1] += A[i]
for i in range(M):
	B[i+1] += B[i]

b = M
r = 0
for i,a in enumerate(A):
	if a > K:
		break
	while a+B[b]>K and b>=0:
		b -= 1
	r = max(r, i+b)

print(r)