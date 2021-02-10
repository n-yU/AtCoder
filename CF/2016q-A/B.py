N = int(input())
a = list(map(int, input().split()))
print(sum([a[x-1]==i+1 for i,x in enumerate(a)])//2)