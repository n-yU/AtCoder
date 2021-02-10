m = int(input()) / 1000

if m < 0.1:
	v = 0
elif m <= 5:
	v = m*10
elif m <= 30:
	v = m+50
elif m <= 70:
	v = (m-30)//5 + 80
else:
	v = 89

print('{:02.0f}'.format(v))