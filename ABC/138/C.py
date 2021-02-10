N = int(input())
v = sorted(map(int, input().split()))

for i in range(N-1):
	v[i+1] = (v[i]+v[i+1])/2
print(v[N-1])