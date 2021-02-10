from collections import Counter
_1, _2 = map(int, input().split())
L = Counter(list(map(int, input().split())))
R = Counter(list(map(int, input().split())))

a = 0
for k, v in L.items():
    a += min(v, R[k])
print(a)
