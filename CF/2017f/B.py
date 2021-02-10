S = input()
a = sum([c=='a' for c in S])
b = sum([c=='b' for c in S])
c = [a,b,len(S)-a-b]
print('YES' if max(c)-min(c)<2 else 'NO')