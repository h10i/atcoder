N, M = map(int, input().split())
AB = [list(map(int, input().split())) for _ in range(N)]
ans = 0
cnt = 0

for ab in sorted(AB):
    for i in range(ab[1]):
        if cnt < M:
            ans += ab[0]
            cnt += 1
        else:
            break
    if cnt >= M:
        break

print(ans)
