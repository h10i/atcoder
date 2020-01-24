def distance(a, b, x, y):
    return ((a - x) ** 2 + (b - y) ** 2) ** 0.5


s, t, x, y, T, V = map(int, input().split())
n = int(input())
p = [list(map(int, input().split())) for _ in range(n)]

ans = "NO"

for i in range(n):
    a, b = p[i]
    d = distance(a, b, s, t) + distance(a, b, x, y)
    if d <= T * V:
        ans = "YES"
        break

print(ans)
