N = int(input())
t, r = 3, 0

while 10 ** t <= N:
    r += N - int(''.join(['9' for _ in range(t)]))
    t += 3
print(r)
