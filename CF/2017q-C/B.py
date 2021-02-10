N = int(input())
A = list(map(int, input().split()))
c = 1

for x in A:
	c *= 1 if x%2 else 2
print(3**N-c)