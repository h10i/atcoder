def dfs(A):
    global ans
    if len(A) == N:
        score = 0
        for a, b, c, d in buff:
            if A[b - 1] - A[a - 1] == c:
                score += d
        ans = max(ans, score)
        return

    A.append(A[-1])
    while A[-1] <= M:
        dfs(A[:])
        A[-1] += 1


N, M, Q = map(int, input().split())
buff = [list(map(int, input().split())) for _ in range(Q)]
ans = 0
dfs([1])
print(ans)
