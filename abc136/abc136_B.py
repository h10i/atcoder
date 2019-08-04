n = int(input())
ans = 0
len = len(str(n))
if len == 1:
    ans = n
else:
    for i in range(1, len, 2):
        ans += 9 * 10 ** (i - 1)
    if len % 2 != 0:
        x = 10 ** (len - 1)
        d = n // x * x - x
        if d == 1:
            d = 0
        ans += d + n % x + 1
print(ans)
