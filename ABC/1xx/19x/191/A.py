V, T, S, D = map(int, input().split())
print('No' if D / V >= T and D / V <= S else 'Yes')
