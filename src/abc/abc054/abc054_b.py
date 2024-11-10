N, M = map(int, input().split())
A = [input() for _ in range(N)]
B = [input() for _ in range(M)]

ans = "No"

for i in range(N - M + 1):
    for j in range(N - M + 1):
        c = 0
        for x in range(M):
            if A[x + i][j:j + M] == B[x]:
                c += 1
        if c == M:
            ans = "Yes"
            break
    else:
        continue
    break

print(ans)
