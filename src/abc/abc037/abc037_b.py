N, Q = map(int, input().split())
a = [0] * N

for _ in range(Q):
    L, R, T = map(int, input().split())
    a[L - 1:R] = [T] * (R - L + 1)

for i in a:
    print(i)
