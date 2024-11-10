N = int(input())
a = list(map(int, input().split()))

cnt = {}

for i in range(N):
    cnt.setdefault(a[i], 0)
    cnt[a[i]] += 1

ans = 0

for k, v in cnt.items():
    if k > v:
        ans += v
    else:
        ans += v - k

print(ans)
