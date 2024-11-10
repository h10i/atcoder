import math

a, b, x = map(int, input().split())

s = x / a

if s >= a * b / 2:
    c = (a * b - s) * 2 / a
    rad = math.atan2(c, a)
else:
    c = s * 2 / b
    rad = math.atan2(b, c)

ans = math.degrees(rad)
print(ans)
