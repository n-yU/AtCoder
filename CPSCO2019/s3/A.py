S,r = input(),str()
for c in S:
	if c == 'O':
		r += 'A'
	elif c == 'A':
		r += 'O'
	else:
		r += c
print(r)