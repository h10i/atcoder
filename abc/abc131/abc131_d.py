N = int(input())
task = [list(map(int, input().split())) for _ in range(N)]

t = 0
ans = "Yes"

for a, b in sorted(task, key=lambda x: x[1]):
    t += a
    if t > b:
        ans = "No"
        break

print(ans)
