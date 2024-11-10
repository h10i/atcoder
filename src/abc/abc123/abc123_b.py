ans = 0
t_min = 10

for i in range(5):
    o = int(input())
    ans += o
    t = o % 10
    if t != 0:
        ans += 10 - t
        if t < t_min:
            t_min = t
ans -= 10 - t_min

print(ans)
