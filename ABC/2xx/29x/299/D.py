n = int(input())
l, r = 0, n

while r > l + 1:
    m = (l + r) // 2
    print("? {0}".format(m))

    if int(input()) == 0:
        l = m
    else:
        r = m

print("! {0}".format(l))
