N, R = map(int, input().split())

ans = R

if N < 10:
    ans += 100 * (10 - N)

print(ans)
