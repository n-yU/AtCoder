l, r = {'Left': '<', 'Right': '>', 'AtCoder': 'A'}, str()
for s in input().split():
    r += l[s] + ' '
print(r[:-1])
