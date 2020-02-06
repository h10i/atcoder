N, S, T = map(int, input().split())
W = int(input())

weight = [None] * N
weight[0] = W

for i in range(1, N):
    A = int(input())
    weight[i] = weight[i - 1] + A

count = 0

for w in weight:
    if S <= w and w <= T:
        count += 1

print(count)
