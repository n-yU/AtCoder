A, B, K, L = map(int, input().split())
print(A * K if A < L / B else K // L * B + min(A * (K - K // L * L), B))
