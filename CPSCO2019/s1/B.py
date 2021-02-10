from collections import Counter
c = list(Counter(input()).values())
print('Yes' if c == [c[0]]*len(c) else 'No')