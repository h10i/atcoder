N, X, Y = map(int, input().split())

ans = [0] * (N - 1)
ans[0] = 1

for i in range(1, N - 1):
    for j in range(i + 1, N + 1):
        d = min(j - i, abs(Y - j) + abs(X - i) + 1)
        ans[d - 1] += 1

for a in ans:
    print(a)
