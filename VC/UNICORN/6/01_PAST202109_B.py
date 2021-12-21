N, M = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

C = sorted(set(A) & set(B))
print(' '.join(list(map(str, C))))
