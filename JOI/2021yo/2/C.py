N = int(input())
A = list(map(int, input().split()))
mi, mv = -1, 0

for i, a in enumerate(A):
    if a > mv:
        mi, mv = i, a

print(sum(A[:mi]))
print(sum(A[mi+1:]))
