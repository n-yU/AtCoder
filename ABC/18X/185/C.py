L, r = int(input()), 1
for i in range(1, 12):
    r *= (L - i) // i
print(r)
