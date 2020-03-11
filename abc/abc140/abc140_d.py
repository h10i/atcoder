N, K = map(int, input().split())
S = input()

cnt = 0

if S[0] == "L":
    cnt += 1

ans = 0

for i in range(N - 1):
    if S[i:i + 2] == "RL":
        cnt += 1
    if S[i] == S[i + 1]:
        ans += 1

if cnt - K >= 1:
    ans += K * 2
else:
    ans = N - 1

print(ans)
