def f(x):
    if x == '6':
        x = '9'
    elif x == '9':
        x = '6'
    return x


print(''.join(map(f, input()[::-1])))
