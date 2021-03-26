from collections import Counter

N, M = map(int, input().split())
A = Counter(list(map(int, input().split())))
print(A.most_common()[0][1])
