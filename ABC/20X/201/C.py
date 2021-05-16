ok, ng, r = set(), set(), set()

for i, s in enumerate(input()):
    i = str(i)
    if s == 'o':
        ok.add(i)
    elif s == 'x':
        ng.add(i)

for p in range(10000):
    t = str(p).zfill(4)
    p = set(t)
    if (len(ok & p) == len(ok)) and (len(ng & p) == 0):
        r.add(t)

print(len(r) if len(ok) < 5 else 0)
