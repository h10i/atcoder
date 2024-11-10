K, N = map(int, input().split())
A = list(map(int, input().split()))

max_d = K - A[-1] + A[0]
for i in range(N - 1):
    d = A[i + 1] - A[i]
    max_d = max(d, max_d)

ans = K - max_d
print(ans)
