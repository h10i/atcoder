l, r = map(int, input().split())
min_remaider = 2019

for i in range(l, r):
    for j in range(i + 1, r + 1):
        remaider = (i * j) % 2019
        if remaider < min_remaider:
            min_remaider = remaider
        if min_remaider == 0:
            break
    if min_remaider == 0:
        break

print(min_remaider)
