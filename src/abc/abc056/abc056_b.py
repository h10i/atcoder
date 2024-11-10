W, a, b = map(int, input().split())

dist = abs(a - b)

if dist > W:
    print(dist - W)
else:
    print(0)
