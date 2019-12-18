N, M = map(int, input().split())
X = list(map(int, input().split()))

ans = 0

if N < M:
    Y = sorted(X)
    sections = sorted([Y[i] - Y[i - 1] for i in range(1, M)])
    for i in range(M - N):
        ans += sections[i]

print(ans)
