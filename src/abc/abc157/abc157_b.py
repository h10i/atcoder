A = [list(map(int, input().split())) for _ in range(3)]
N = int(input())
b = [int(input()) for _ in range(N)]

card = [[0 for _ in range(3)] for _ in range(3)]


for i in range(N):
    for x in range(3):
        for y in range(3):
            if A[x][y] == b[i]:
                card[x][y] = 1

ans = "No"

for i in range(3):
    if sum(card[i]) == 3:
        ans = "Yes"

if sum([card[i][i] for i in range(3)]) == 3:
    ans = "Yes"

if sum([card[i][2 - i] for i in range(3)]) == 3:
    ans = "Yes"

for i in range(3):
    if sum([card[j][i] for j in range(3)]) == 3:
        ans = "Yes"

print(ans)
