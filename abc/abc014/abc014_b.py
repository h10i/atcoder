n, X = map(int, input().split())
a = list(map(int, input().split()))

total = 0

for i in range(n):
    if X >> i & 1:
        total += a[i]

print(total)
