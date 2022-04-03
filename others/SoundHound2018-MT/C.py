n,m,d = map(int,input().split())
print((m-1)/n if d==0 else (m-1)*2*(n-d)/(n*n))