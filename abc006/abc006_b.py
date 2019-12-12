n = int(input())
a = [0, 0, 1]

for i in range(3, n):
    x = (a[0] + a[1] + a[2]) % 10007
    a[0], a[1], a[2] = a[1], a[2], x

if n <= 2:
    ans = 0
else:
    ans = a[2]

print(ans)
