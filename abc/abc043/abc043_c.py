N = int(input())
a = list(map(int, input().split()))

average = (sum(a) + N // 2) // N
cost = 0

for i in range(N):
    cost += (average - a[i]) ** 2

print(cost)
