x, y = map(int, input().split())
k = int(input())
print(x + min(y, k) - max(k - y, 0))
