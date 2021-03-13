N, S = int(input()), input()
T = ''.join(['O' if i % 2 else 'I' for i in range(N)])
print(sum([s != t for s, t in zip(S, T)]))
