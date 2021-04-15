S = [int(input()) for _ in range(6)]
print(sum(S) - min(S[:4]) - min(S[4:]))
