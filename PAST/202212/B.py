a, b, c, d = map(int, input().split())
ab, cd = a / b, c / d

if ab < cd:
    print('<')
elif ab > cd:
    print('>')
else:
    print('=')
