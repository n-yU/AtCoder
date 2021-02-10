N = int(input())
t = 2 ** N
A = [(r, i) for r, i in zip(list(map(int, input().split())), range(1, t+1))]
print(min(max(A[:t//2]), max(A[t//2:]))[1])
