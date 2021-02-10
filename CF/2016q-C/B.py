K,T = map(int, input().split())
a = sorted(list(map(int, input().split())), reverse=True)
print(max(a[0]-sum(a[1:])-1, 0))