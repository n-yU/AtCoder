import math
n = int(input())
a = list(map(int,input().split()))
r = float("inf")

for i in a:
    j = bin(i)
    r = min(r, len(j)-j.rfind("1")-1)
print(round(r))
