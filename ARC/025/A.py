D = list(map(int, input().split()))
J = list(map(int, input().split()))
print(sum([max(d, j) for d, j in zip(D, J)]))
