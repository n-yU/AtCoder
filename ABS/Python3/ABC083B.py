N,A,B = map(int, input().split())
r = 0
for i in range(N+1):
    if A <= sum(list(map(int, list(str(i))))) <= B:
        r += i
print(r)
