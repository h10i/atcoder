N = int(input())
A = list(map(int, input().split()))

cnt = {}

for a in A:
    cnt.setdefault(a, 0)
    cnt[a] += 1

cnt_filter = list(filter(lambda x: x[1] >= 2, cnt.items()))
cnt_filter.sort(key=lambda x: x[0], reverse=True)

x = 0
y = 0

if len(cnt_filter) >= 2:
    x = cnt_filter[0][0]
    y = cnt_filter[1][0]
    if cnt_filter[0][1] >= 4:
        y = x

ans = x * y

print(ans)
