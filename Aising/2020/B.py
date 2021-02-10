N = int(input())
a = list(map(int, input().split()))
c = 0

for i in range(N):
	c += i%2==0 and a[i]%2
print(c)