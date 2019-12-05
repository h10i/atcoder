n = int(input())

ans = 10 ** 5

for h in range(1, int(n ** 0.5) + 1):
    w = n // h
    ans = min(ans, abs(h - w) + (n - w * h))

print(ans)
