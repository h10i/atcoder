c = [list(map(int, input().split())) for _ in range(3)]

a = [0] * 3
b = [0] * 3

for i in range(3):
    b[i] = c[0][i] - a[0]

for i in range(1, 3):
    a[i] = c[i][0] - b[0]

ans = "Yes"

for i in range(3):
    for j in range(3):
        if a[i] + b[j] != c[i][j]:
            ans = "No"
            break
    else:
        continue
    break

print(ans)
