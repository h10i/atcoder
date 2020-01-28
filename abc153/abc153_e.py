import sys

input = sys.stdin.readline
H, N = map(int, input().split())
magic = [list(map(int, input().split())) for _ in range(N)]

max_damage = max(damage for damage, cost in magic)
dp = [0] * (H + max_damage)

for x in range(1, H + max_damage):
    dp[x] = min(dp[x - damage] + cost for damage, cost in magic)

ans = min(dp[H:])

print(ans)
