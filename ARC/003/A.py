N, r = int(input()), input()
s, x = {'A': 4, 'B': 3, 'C': 2, 'D': 1, 'F': 0}, 0

for c in r:
    x += s[c]
print(x / len(r))
