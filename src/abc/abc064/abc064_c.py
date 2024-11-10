N = int(input())
a = list(map(int, input().split()))

c = [0] * 9

for rate in a:
    i = rate // 400
    if i < 8:
        c[i] = 1
    else:
        c[8] += 1

c_sum = sum(c[:8])
c_min = max(c_sum, 1)
c_max = c_sum + c[8]

print(c_min, c_max)
