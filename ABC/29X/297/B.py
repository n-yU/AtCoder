def list_idx(L, e):
    return [i for i, l in enumerate(L) if l == e]


S = input()
b, k, r = list_idx(S, 'B'), list_idx(S, 'K')[0], list_idx(S, 'R')
if(sum(b) % 2) and (r[0] < k < r[1]):
    print('Yes')
else:
    print('No')
