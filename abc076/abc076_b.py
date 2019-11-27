N = int(input())
K = int(input())

num = 1

for _ in range(N):
    a = num * 2
    b = num + K
    num = min(a, b)

print(num)
