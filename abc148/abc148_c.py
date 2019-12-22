def gcd(x, y):
    if x < y:
        a, b = x, y
    else:
        a, b = y, x

    while True:
        r = a % b
        if r == 0:
            break
        a, b = b, r

    return b


A, B = map(int, input().split())

ans = A * B // gcd(A, B)

print(ans)
