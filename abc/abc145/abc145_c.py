N = int(input())
p = [list(map(int, input().split())) for _ in range(N)]

total = 0

for i in range(N - 1):
    xi = p[i][0]
    yi = p[i][1]
    for j in range(i + 1, N):
        xj = p[j][0]
        yj = p[j][1]
        total += ((xi - xj) ** 2 + (yi - yj) ** 2) ** 0.5

ans = total * 2 / N

print(ans)
