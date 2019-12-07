import math


def gcd(x, y):
    while True:
        r = x % y
        if r == 0:
            return y
        x, y = y, r


def lcm(x, y):
    return x * y // gcd(x, y)


a = int(input())
b = int(input())
n = int(input())

c = lcm(a, b)

print(c * math.ceil(n / c))
