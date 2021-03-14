N, M = map(int, input().split())
A = sorted(list(map(int, input().split())))
B = sorted(list(map(int, input().split())))
r = 0

for a in A:
    for i, b in enumerate(B):
        if a <= b:
            r += M - i
            break
print(r)
