n, d = map(int, input().split())
x = [[None for _ in range(d)] for _ in range(n)]
cnt = 0

for i in range(n):
    x[i] = list(map(int, input().split()))

for i in range(n - 1):
    for j in range(i + 1, n):
        distance = 0
        for k in range(d):
            distance += (x[i][k] - x[j][k]) ** 2
        if (distance ** 0.5).is_integer():
            cnt += 1

print(cnt)
