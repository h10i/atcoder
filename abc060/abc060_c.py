N, T = map(int, input().split())
t = list(map(int, input().split()))

ans = T

for i in range(1, N):
    dt = t[i] - t[i - 1]
    if dt < T:
        ans += dt
    else:
        ans += T

print(ans)
