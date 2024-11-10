X = int(input())

t = 0

while True:
    t += 1
    d = t * (t + 1) // 2
    if d >= X:
        break

print(t)
