n, m = map(int, input().split())
S = sorted([tuple(map(int, input().split())) for _ in range(m)], reverse=True)
print(sum(map(lambda x: max(0, n - x[0]), S[:-1])))
