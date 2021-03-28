N = int(input())
S = set()
for _ in range(N):
  S.add(input())

for s in S:
  if s[0] == '!' and s[1:] in S:
    print(s[1:])
    exit()
print('satisfiable')
