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


N, X = map(int, input().split())
x = list(map(int, input().split()))

ans = abs(X - x[0])

for i in range(1, N):
    ans = gcd(ans, abs(X - x[i]))

print(ans)
