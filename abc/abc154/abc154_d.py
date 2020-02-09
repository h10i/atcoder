N, K = map(int, input().split())
p = list(map(int, input().split()))

e = [0] * N

for i in range(N):
    e[i] = (p[i] + 1) / 2

total = sum(e[0:K])
ans = total

for i in range(N - K):
    total += e[i + K] - e[i]
    if total > ans:
        ans = total

print(ans)
