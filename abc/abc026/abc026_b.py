import math

N = int(input())
R = [int(input()) for _ in range(N)]

a = 0

for i, r in enumerate(sorted(R, reverse=True)):
    b = r * r
    if i % 2 == 0:
        a += b
    else:
        a -= b

print(a * math.pi)
