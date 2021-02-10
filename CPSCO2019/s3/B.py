N,M = map(int, input().split())
a =  sorted(list(map(int, input().split())), reverse=True)

for i,x in enumerate(a):
	M -= x;
	if M <= 0:
		print(i+1)
		exit()