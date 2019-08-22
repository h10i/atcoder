n, m = map(int, input().split())
l_max = 1
r_min = 10 ** 5

for _ in range(m):
    l, r = map(int, input().split())
    if l > l_max:
        l_max = l
    if r < r_min:
        r_min = r

if r_min < l_max:
    ans = 0
else:
    ans = r_min - l_max + 1

print(ans)
