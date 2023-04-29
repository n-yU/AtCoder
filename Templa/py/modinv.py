def modinv(a: int, m: int):
    b, u, v = m, 1, 0
    while b:
        t = a // b
        a, u = a - t * b, u - t * v
        a, b, u, v = b, a, v, u

    u %= m
    u += m * (u < 0)
    return u
