S, X, r = input(), set(list(map(int, input().split()))), ''
for i, s in enumerate(S):
    if i in X:
        r += '\"'
    r += s
if len(S) in X:
    r += '\"'
print(r)
