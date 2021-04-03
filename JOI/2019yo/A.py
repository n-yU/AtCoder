A, B, C = map(int, input().split())
w, r = C // (A * 7 + B), C % (A * 7 + B)

for i in range(8):
    if r <= 0:
        break
    r -= A + (B if i == 6 else 0)

print(w * 7 + i)
