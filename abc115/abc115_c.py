N, K = map(int, input().split())
h = [int(input()) for _ in range(N)]

a = sorted(h)
d = [a[i] - a[i - (K - 1)] for i in range(K - 1, N)]
ans = min(d)

print(ans)
