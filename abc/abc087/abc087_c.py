N = int(input())
A = [list(map(int, input().split())) for _ in range(2)]

ans = 0

for i in range(N):
    total = sum(A[0][0:i + 1]) + sum(A[1][i:N + 1])
    if total > ans:
        ans = total

print(ans)
