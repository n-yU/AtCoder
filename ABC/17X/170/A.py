x = list(map(int,input().split()))
for i,p in enumerate(x):
	if p == 0:
		print(i+1)
		exit()