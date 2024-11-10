N, K = map(int, input().split())

x = N

if x > K:
    x %= K

if K - x < x:
    x = K - x

print(x)
