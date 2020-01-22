N, M = map(int, input().split())
liners = {}

for i in range(M):
    a, b = map(int, input().split())
    liners.setdefault(a, [])
    liners[a].append(b)

ans = "IMPOSSIBLE"

for i in liners[1]:
    if i in liners and N in liners[i]:
        ans = "POSSIBLE"
        break

print(ans)
