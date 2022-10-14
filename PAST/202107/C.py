S, (L, R) = input(), map(int, input().split())
print('Yes' if len(S) <= 10 and len(str(int(S))) == len(S) and int(S) >= L and int(S) <= R else 'No')
