N = int(input())
A = list(map(int, input().split()))

order = [None] * N

for i in range(N):
    order[A[i] - 1] = str(i + 1)

print(" ".join(order))
