n, m = map(int, input().split())

short = (n % 12 * 30) + (m / 60 * 30)
long = m * 6
angle = abs(short - long)

print(min(angle, 360 - angle))
