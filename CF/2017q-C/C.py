s = input()
l,r = 0,len(s)-1
c = 0

while l<r:
	if s[l] == s[r]:
		l,r = l+1,r-1
	elif s[l] == 'x':
		l,c = l+1,c+1
	elif s[r] == 'x':
		r,c = r-1,c+1
	else:
		print(-1)
		exit()
print(c)