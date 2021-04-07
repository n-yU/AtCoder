N = int(input())
A = list(map(int, input().split()))
r, c = 0, 0

for a in A:
    if a:
        c += 1
    else:
        r, c = max(r, c), 0

print(max(r, c) + 1)
