N = int(input())
for _ in range(N):
	A,B = map(int, input().split())
	print(-1 if A==B else abs(A-B))