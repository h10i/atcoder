n, l = map(int, input().split())
val = [l + i for i in range(n)]
min_v = 100
min_i = 0

for i in range(n):
    abs_v = abs(val[i])
    if abs_v < min_v:
        min_v = abs_v
        min_i = i

print(sum(val) - val[min_i])
