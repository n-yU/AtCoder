S = int(input())
x = [1, 0, 0]

for i in range(3, S+1):
    x.append(x[i-1] + x[i-3])
print(x[S]%1000000007)
