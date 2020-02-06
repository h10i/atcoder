a = int(input())
M = 1000000
m = 1

while m <= M:
    if a in (1, 2, 4):
        m += 3
        break
    if a % 2 == 0:
        a //= 2
    else:
        a = 3 * a + 1
    m += 1

print(m)
