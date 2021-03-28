N,X,T = map(int, input().split())
print((N//X+(not N%X == 0)) * T)