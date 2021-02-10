E, B, L = set(input().split()), input(), set(input().split())
r = len(E & L)

if r == 6:
    print(1)
elif r == 5 and B in L:
    print(2)
elif r > 2:
    print(8 - r)
else:
    print(0)
