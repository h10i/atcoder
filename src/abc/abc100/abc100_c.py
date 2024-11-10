N = int(input())
a = list(map(int, input().split()))

ans = 0

for i in range(N):
    b = a[i]
    while b % 2 == 0:
        ans += 1
        b //= 2

print(ans)
