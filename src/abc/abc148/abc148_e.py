N = int(input())

ans = 0

if N % 2 == 0:
    i = 0
    while True:
        x = N // (10 * (5 ** i))
        if x == 0:
            break
        i += 1
        ans += x

print(ans)
