N = int(input())
d = list(map(int, input().split()))

total = 0

for i in range(N - 1):
    for j in range(i + 1, N):
        total += d[i] * d[j]

print(total)
