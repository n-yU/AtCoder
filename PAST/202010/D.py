N, S, T, m, p = int(input()), input(), [], 0, 0

for i, s in enumerate(S):
  if s == '#':
    T.append(i)
    m = max(m, T[-1] - p - 1)
    p = T[-1]

l, r = T[0], N - T[-1] - 1
l += max(0, m - l - r)
print(l, r)
