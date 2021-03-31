N, S = int(input()), input()
for i in range(N - 2):
    if S[i:i + 3].lower() == 'joi':
        S = S[:i] + S[i:i + 3].upper() + S[i + 3:]
print(S)
