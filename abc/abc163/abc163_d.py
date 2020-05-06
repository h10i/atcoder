N, K = map(int, input().split())
mod = 10**9 + 7
ans = 0

for i in range(K, N + 2):
    a = N - i + 1
    n_max = i * (2 * a + i - 1) // 2
    n_min = i * (i - 1) // 2
    ans += n_max - n_min + 1
    ans %= mod

print(ans)
