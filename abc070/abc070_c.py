def gcd(x, y):
    while True:
        r = x % y
        x, y = y, r
        if r == 0:
            return x


def lcm(a, b):
    return a * b // gcd(a, b)


N = int(input())
T = [int(input()) for _ in range(N)]

ans = T[0]

for i in range(1, N):
    ans = lcm(ans, T[i])

print(ans)
