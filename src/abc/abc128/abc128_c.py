from itertools import product

n, m = map(int, input().split())
s = [None for _ in range(m)]

for i in range(m):
    s[i] = list(map(int, input().split()))

p = list(map(int, input().split()))

ans = 0
for tpl in product([0, 1], repeat=n):
    for i in range(m):
        cnt = 0
        is_on = True
        for j in range(s[i][0]):
            if tpl[s[i][j + 1] - 1] == 1:
                cnt += 1
        if cnt % 2 != p[i]:
            is_on = False
            break
    if is_on:
        ans += 1

print(ans)
