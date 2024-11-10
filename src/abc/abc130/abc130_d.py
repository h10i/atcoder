n, k = map(int, input().split())
a = list(map(int, input().split()))
total = a[0]
ans = 0
j = 0

for i in range(n):
    while True:
        if total >= k:
            ans += n - j
            break
        elif j < n - 1:
            j += 1
            total += a[j]
        else:
            break
    total -= a[i]

print(ans)
