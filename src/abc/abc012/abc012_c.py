N = int(input())

total = 0
for i in range(1, 10):
    for j in range(1, 10):
        total += i * j

diff = total - N

for x in range(1, 10):
    for y in range(1, 10):
        if x * y == diff:
            print("{} x {}".format(x, y))
