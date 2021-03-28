from collections import deque

N = int(input())
A = sorted(list(map(int, input().split())), reverse=True)
s,d = 0,deque()

d.append(A[0])
for i in range(1,N):
	s += d.popleft()
	d.append(A[i])
	d.append(A[i])
print(s)