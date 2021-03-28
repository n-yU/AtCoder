from collections import Counter

N,S = int(input()),[]
for _ in range(N):
	S.append(input())
c = Counter(S)

print('AC x ' + str(c['AC']))
print('WA x ' + str(c['WA']))
print('TLE x ' + str(c['TLE']))
print('RE x ' + str(c['RE']))