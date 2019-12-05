N = int(input())
K = int(input())
X = int(input())
Y = int(input())

total = 0

if K >= N:
    total = N * X
else:
    total = K * X + (N - K) * Y

print(total)
