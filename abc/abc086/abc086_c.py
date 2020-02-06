N = int(input())
travel = [list(map(int, input().split())) for _ in range(N)]

buff = [0, 0, 0]
ans = "Yes"

for i in range(N):
    t, x, y = travel[i]
    time = t - buff[0]
    distance = abs(x - buff[1]) + abs(y - buff[2])
    if time < distance or (time - distance) % 2 == 1:
        ans = "No"
        break
    buff = travel[i]

print(ans)
