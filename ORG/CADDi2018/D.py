N = int(input())
a = list(range(N))
for i in range(N):
	a[i] = int(input())
print('first' if any(x%2 for x in a) else 'second')