N = int(input())
print(sum([max(0, 80 - m) for m in list(map(int, input().split()))]))
