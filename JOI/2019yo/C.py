N, S = int(input()), input()
i, c = 0, 0

while i < N - 1:
    if S[i:(i + 2)] in {'OX', 'XO'}:
        c += 1
        i += 1
    i += 1
print(c)
