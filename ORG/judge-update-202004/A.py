S, L, R = map(int, input().split())
print(S if S in range(L, R+1) else (L if S < L else R))
