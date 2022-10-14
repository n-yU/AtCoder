S = input()
d = sum([int(s) * (1 if i % 2 else 3) for i, s in enumerate(S[:-1])]) % 10
print('Yes' if d == int(S[-1]) else 'No')
