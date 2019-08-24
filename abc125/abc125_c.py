from fractions import gcd

n = int(input())
a = list(map(int, input().split()))
l = [0 for _ in range(n + 1)]
r = [0 for _ in range(n + 1)]

for i in range(n):
    l[i + 1] = gcd(l[i], a[i])

for i in reversed(range(n)):
    r[i] = gcd(r[i + 1], a[i])

m = [gcd(l[i], r[i + 1]) for i in range(n)]

print(max(m))
