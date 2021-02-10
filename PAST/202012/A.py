S = input()
for i in range(3):
  t = set(S[i:(i + 3)])
  if len(t) == 1:
    print(t.pop())
    exit()
print('draw')
