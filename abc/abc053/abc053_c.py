x = int(input())

ans = x // 11 * 2
r = x % 11

if 1 <= r <= 6:
    ans += 1
elif 7 <= r:
    ans += 2

print(ans)
