N = int(input())
R = set()

for i in range(2, 100001):
    j = 2
    while i ** j <= N:
        R.add(i ** j)
        j += 1

print(N - len(R))
