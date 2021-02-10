N,A = map(int, input().split())
print(A//3+(not A%3==0), min(N//3,A))