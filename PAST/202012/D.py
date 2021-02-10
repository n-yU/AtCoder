N = int(input())
S = [() for _ in range(N)]

for i in range(N):
  T, c, j = input(), 0, 0
  
  while T[j] == '0':
    if j == len(T) - 1:
      break
    c, j = c + 1, j + 1
  S[i] = (int(T[j:]), -c)

for s in sorted(S):
  print('0' * (-s[1]) + str(s[0]))
