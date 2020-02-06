c = [None] * 3

for i in range(3):
    c[i] = input()

ans = ""

for i in range(3):
    ans += c[i][i]

print(ans)
