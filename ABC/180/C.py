N = int(input())
i, s = 1, set()

while i * i <= N:
    if N % i == 0:
        s |= set([i, N // i])
    i += 1

for x in sorted(list(s)):
    print(x)
