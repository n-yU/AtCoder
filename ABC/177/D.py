class UnionFind:
    def __init__(self, n):
        self.r = [-1] * n
    
    def root(self, x):
        if self.r[x] < 0:
            return x
        self.r[x] = self.root(self.r[x])
        return self.r[x]

    def merge(self, x, y):
        x, y = self.root(x), self.root(y)
        if x == y:
            return False
        if self.r[x] > self.r[y]:
            x, y = y, x
        self.r[x] += self.r[y]
        self.r[y] = x
        return True

    def size(self, x):
        return -self.r[self.root(x)]


N, M = map(int, input().split())
f, uf = [set() for i in range(N)], UnionFind(N)

for _ in range(M):
    A, B = map(lambda x: int(x)-1, input().split())
    uf.merge(A, B)

print(max([uf.size(i) for i in range(N)]))
