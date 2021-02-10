N = int(input())
for i in range(1, 41):
  for j in range(1, 31):
    if 3 ** i + 5 ** j == N:
      print(i, j)
      exit()
print(-1)
