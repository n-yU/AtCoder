N = int(input())
for k in range(1, 31):
    if (3 ** k + 1) * (3 ** (30 - k)) == N:
        print(k)
        break
else:
    print(-1)
