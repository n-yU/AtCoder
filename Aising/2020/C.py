N = int(input())
f = {}

for x in range(1, 110):
	for y in range(1, 110):
		for z in range(1, 110):
			t = x*x+y*y+z*z+x*y+y*z+z*x
			f[t] = (f[t]+1 if t in f.keys() else 1)

for i in range(i,N+1):
    print(f[i] if i in f.keys() else 0)