N, A, B = map(int, input().split())
print(min(N * A, max(N - 5, 0) * A + min(N, 5) * B))
