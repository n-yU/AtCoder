S = input()
for i in range(len(S) // 4):
    if S[(i * 4):(i * 4 + 4)] == 'post':
        print(i + 1)
        exit()
print('none')
