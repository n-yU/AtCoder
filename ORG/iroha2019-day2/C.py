N = int(input())
H = [int(input()) for _ in range(N)]
R = dict(zip(sorted(list(set(H))), list(range(1, N + 1))))
print('\n'.join([str(R[h]) for h in H]))
