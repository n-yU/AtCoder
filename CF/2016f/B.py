N,t = int(input()),1

while t*(t+1) < N*2:
	t += 1
for i in range(1,t+1):
	if t*(t+1)//2-i != N:
		print(i)