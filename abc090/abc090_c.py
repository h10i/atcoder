N, M = map(int, input().split())

if N == 1:
    if M == 1:
        ans = 1
    else:
        ans = M - 2
else:
    if M == 1:
        ans = N - 2
    else:
        ans = (N - 2) * (M - 2)

print(ans)
