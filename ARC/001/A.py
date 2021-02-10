from collections import Counter

N, C = input(), input()
r = Counter(C).most_common()
print(r[0][1], (0 if len(r) < 4 else r[-1][1]))
