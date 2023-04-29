N = int(input())
print(0 if not N%1000 else (N//1000+1)*1000-N)