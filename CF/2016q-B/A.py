S = input()
T = "CODEFESTIVAL2016"
print(sum([i!=j for i,j in zip(S,T)]))