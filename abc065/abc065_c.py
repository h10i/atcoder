N, M = map(int, input().split())

X = 10 ** 9 + 7
ans = 0

if N - M < 2:
    if N == M:
        ans = 2
    elif abs(N - M) == 1:
        ans = 1

    for i in range(N):
        ans *= N - i
        ans %= X
    for i in range(M):
        ans *= M - i
        ans %= X

print(ans)
