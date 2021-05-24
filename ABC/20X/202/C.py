from collections import Counter

n, r = int(input()), 0
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))

CA = Counter(A)
CB = Counter([B[c - 1] for c in C])

for ca in CA.items():
    r += ca[1] * CB.get(ca[0]) if CB.get(ca[0]) else 0
print(r)
