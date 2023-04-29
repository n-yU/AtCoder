n, m = int(input()), int(input())
B = [[] for _ in range(n + 1)]
N = [set() for _ in range(int(2e5) + 1)]

for _ in range(m):
    q = list(map(int, input().split()))
    if q[0] == 1:
        B[q[2]].append(q[1])
        N[q[1]].add(q[2])
    elif q[0] == 2:
        print(' '.join(map(str, sorted(B[q[1]]))))
    else:
        print(' '.join(map(str, sorted(N[q[1]]))))
