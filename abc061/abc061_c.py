N, K = map(int, input().split())
ab = [list(map(int, input().split())) for _ in range(N)]
cnt = 0
ans = 0

for n in sorted(ab, key=lambda x: x[0]):
    cnt += n[1]
    if cnt >= K:
        ans = n[0]
        break

print(ans)
