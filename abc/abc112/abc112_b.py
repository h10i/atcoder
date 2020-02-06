N, T = map(int, input().split())
ans = 1001

for _ in range(N):
    c, t = map(int, input().split())
    if c <= ans and t <= T:
        ans = c

if ans == 1001:
    ans = "TLE"

print(ans)
