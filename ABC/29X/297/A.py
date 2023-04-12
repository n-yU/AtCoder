N, D = map(int, input().split())
T = list(map(int, input().split()))

for t1, t2 in zip(T[:-1], T[1:]):
    if t2 - t1 <= D:
        print(t2)
        break
else:
    print(-1)
