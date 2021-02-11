N, K = map(int, input().split())
S, T, c = dict(), dict(), 0
for _ in range(N):
    s = input()
    v = S.get(s)
    if v is None:
        S[s] = 1
    else:
        S[s] += 1

for k, v in S.items():
    x = T.get(v)
    if x is None:
        T[v] = set()
    T[v].add(k)

R = sorted(T.items(), key=lambda x: -x[0])
for x, y in R:
    c += len(y)
    if c == K and len(y) == 1:
        print(y.pop())
        exit()
    if c > K:
        break
print('AMBIGUOUS')
