S = input()
print('Yes' if S[3] == '-' and (S[:3] + S[4:]).isdigit() else 'No')
