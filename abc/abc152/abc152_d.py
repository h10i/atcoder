N = int(input())

data = [[0 for _ in range(10)] for _ in range(10)]

for i in range(1, N + 1):
    s_i = str(i)
    a = int(s_i[0])
    b = int(s_i[-1])
    data[a][b] += 1

ans = 0

for i in range(1, 10):
    for j in range(1, 10):
        ans += data[i][j] * data[j][i]

print(ans)
