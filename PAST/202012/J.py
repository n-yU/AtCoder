S, X = input(), int(input())

while 1:
    t = 0
    for c in S:
        if c.islower():
            if X == t + 1:
                print(c)
                exit()
            t += 1
        else:
            d = int(c)
            if X <= (d + 1) * t:
                X = (X % t) or t
                break
            t += d * t
