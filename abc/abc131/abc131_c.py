# import math
import fractions


a, b, c, d = map(int, input().split())


def lcm(x, y):
    # DeprecationWarning: fractions.gcd() is deprecated. Use math.gcd() instead.
    return x * y // fractions.gcd(x, y)


a1 = a - 1
div_a = (a1 // c) + (a1 // d) - (a1 // lcm(c, d))
div_b = (b // c) + (b // d) - (b // lcm(c, d))

print((b - a + 1) - (div_b - div_a))
