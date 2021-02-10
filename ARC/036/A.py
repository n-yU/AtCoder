N, K = map(int, input().split())
T = []

for _ in range(N):
    T.append(int(input()))
x = sum(T[:3])
for i in range(N - 3):
    if x < K:
        print(i + 3)
        exit()
    x -= T[i] - T[i + 3]

print(N if x < K else -1)
