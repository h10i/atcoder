N = int(input())
a = list(map(int, input().split()))

ans = 0
cnt = 1

for i in range(N):
    if a[i] == cnt:
        cnt += 1
    else:
        ans += 1

if cnt == 1 and ans > 0:
    ans = -1

print(ans)
