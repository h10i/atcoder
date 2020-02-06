n = int(input())
a = list(map(int, input().split()))

ans = 0

for i in range(n):
    b = a[i]
    while True:
        if b % 3 == 2 or b % 2 == 0:
            ans += 1
            b -= 1
        else:
            break

print(ans)
