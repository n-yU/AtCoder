def primeFact(n):
    r, i = {}, 2
    while i*i <= n:
        while n % i == 0:
            if r.get(i) is None:
                r[i] = 0
            r[i] += 1
            n //= i
        i += 1
    if n != 1:
        r[n] = 1
    return r

N, K = map(int, input().split())
pf, c = primeFact(N), 1

R = []
for t in [[k] * v for k, v in pf.items()]:
    R.extend(t)

while len(R)-c+1 > K:
    R[-c-1] *= R[-c]
    c += 1
if c > 1:
    R = R[:-c+1]

if len(R) < K:
    print(-1)
else:
    print(' '.join(list(map(str, R))))
