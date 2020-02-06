N, M = map(int, input().split())

y = 1900 * M + 100 * (N - M)
p = 2 ** M
X = y * p

print(X)
