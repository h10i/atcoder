N, K = map(int, input().split())
H = list(map(int, input().split()))

monsters = sorted(H)

if N <= K:
    ans = 0
else:
    ans = sum(monsters[:N - K])

print(ans)
