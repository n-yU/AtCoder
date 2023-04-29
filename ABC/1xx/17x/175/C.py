X, K, D = map(int, input().split())
X = abs(X)

t = min(K, X // D)
r = X - D * t
if K > t:
    r = r - D if (K - t) % 2 else r
print(abs(r))
