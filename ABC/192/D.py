X = input()
M = int(input())
l, r = int(max(list(X))), int(1e18) + 1
m = l

if len(X) == 1:
    print(1 if int(X) <= M else 0)
    exit()

while r - l > 1:
    d = (l + r) // 2
    t, Y = M, []
    while t > 0:
        Y.append(ord('0') + (t % d))
        t //= d
    Y = Y[::-1]

    if len(Y) > len(X):
        l = d
    elif len(Y) < len(X):
        r = d
    else:
        b = 1
        for x, y in zip(X, Y):
            x = ord(x)
            if x == y:
                continue
            elif x > y:
                b = 0
                break
            else:
                break

        if b:
            l = d
        else:
            r = d

print(l - m)
