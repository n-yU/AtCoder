S = input()
if S == 'RRR':
	r = 3
elif S == 'SRR' or S == 'RRS':
	r = 2
elif 'R' in S:
	r = 1
else:
	r = 0
print(r)