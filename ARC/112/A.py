for _ in range(int(input())):
    L, R = map(int, input().split())
    print((max(R - L * 2 + 1, 0)) * (max(R - L * 2 + 2, 0)) // 2)
