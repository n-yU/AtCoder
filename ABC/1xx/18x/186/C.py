N, c = int(input()), 0
for i in range(1, N+1):
    if not ('7' in str(i) or '7' in oct(i)):
        c += 1
print(c)
