N = int(input())
a = list(map(int, input().split()))

cnt = {}

for i in range(N):
    for j in range(-1, 2):
        k = a[i] + j
        cnt.setdefault(k, 0)
        cnt[k] += 1

ans = max(cnt.values())

print(ans)
