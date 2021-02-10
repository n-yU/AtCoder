A, B = input().split()
r = int(A) - int(B)

for i in range(3):
    r = max(r, int(A[:i] + '9' + A[i+1:])-int(B))
for i in range(3):
    r = max(r, int(A)-int(B[:i] + ('1' if i == 0 else '0') + B[i+1:]))

print(r)
