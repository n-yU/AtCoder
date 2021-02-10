L,X = map(int, input().split())
print(L-X%L if (X//L)%2 else X%L)