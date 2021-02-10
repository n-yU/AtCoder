N = int(input())
c = input()
a = 0

r = sum([x=='R' for x in c])
for i in range(r):
	if c[i] == 'W':
		a += 1
print(a)