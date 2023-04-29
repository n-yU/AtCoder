N,D = map(int, input().split())
t = D*2+1
print(N//t+1 if N%t else N//t)