H,W = map(int, input().split())

for i in range(H):
	s = list(input().split())
	for j in range(W):
		if s[j] == "snuke":
			print(chr(j+ord('A')) + str(i+1))
			exit()