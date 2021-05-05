s = input()
print(sum([s[i:i + 4] == 'ZONe' for i in range(9)]))
