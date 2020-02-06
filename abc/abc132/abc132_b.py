n = int(input())
p = list(map(int, input().split()))
cnt = 0

for i in range(1, n - 1):
    max_p = max(p[i - 1], p[i], p[i + 1])
    min_p = min(p[i - 1], p[i], p[i + 1])
    if max_p != p[i] and min_p != p[i]:
        cnt += 1

print(cnt)
