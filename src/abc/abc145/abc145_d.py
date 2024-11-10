X, Y = map(int, input().split())

mod = 10 ** 9 + 7


def choose(n, r):
    x = 1
    y = 1
    for i in range(min(r, n - r)):
        x = x * (n - i) % mod
        y = y * (i + 1) % mod
    y = pow(y, mod - 2, mod)
    return (x * y) % mod


ans = 0

if (X + Y) % 3 == 0:
    n = (2 * Y - X) // 3
    m = (2 * X - Y) // 3
    if min(n, m) >= 0:
        ans = choose(n + m, n)

print(ans)
