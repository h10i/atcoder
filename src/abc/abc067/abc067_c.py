N = int(input())
a = list(map(int, input().split()))

x = a[0]
y = sum(a[1:])
ans = abs(x - y)

for i in range(1, N - 1):
    x += a[i]
    y -= a[i]
    ans = min(abs(x - y), ans)

print(ans)
