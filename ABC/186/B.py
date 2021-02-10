H, W = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(H)]
print(sum([sum([e - min([min(a) for a in A]) for e in a]) for a in A]))
