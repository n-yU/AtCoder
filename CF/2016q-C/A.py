s = input()
for i,c in enumerate(s):
	for j in range(len(s)-i):
		if s[i]+s[j+i] == 'CF':
			print('Yes')
			exit()
print('No')