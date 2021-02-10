N = int(input())
t = N
d = 1
s = ''

while t-26**d > 0:
    t -= 26**d
    d += 1
t -= 1

while t > 0:
    r = t % 26
    t //= 26
    s += chr(r+ord('a'))

s += 'a' * max(0, d-len(s))
print(s[::-1])