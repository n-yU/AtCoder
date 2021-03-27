S = input()
K = int(input())
t = K % len(S)
print(S[t:] + S[:t])