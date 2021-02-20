X = input()
M = int(input())

for d in range(int(max(list(X))) + 1, 100000):
    t, Y = M, []
    while t > 0:
        Y.append(ord('0') + (t % d))
        t //= d
    Y = Y[::-1]

    if len(Y) > len(X):
        continue
    elif len(Y) < len(X):
        break
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
            continue
        else:
            break

print(d - int(max(list(X))) - 1)
