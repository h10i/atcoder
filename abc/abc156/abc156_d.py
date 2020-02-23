n, a, b = map(int, input().split())
mod = 10 ** 9 + 7


def power(x, y, z):
    if x == 1 or y == 0:
        return 1
    a = power(x, y // 2, z)
    a = (a * a) % z
    if y % 2 == 1:
        a = (a * x) % z
    return a


def choose(n, r, z):
    x = 1
    y = 1

    for i in range(min(r, n - r)):
        x = (x * (n - i)) % z
        y = (y * (i + 1)) % z

    y = power(y, z - 2, z)
    return (x * y) % z


ans = power(2, n, mod) - 1 - choose(n, a, mod) - choose(n, b, mod)
ans %= mod

print(ans)
