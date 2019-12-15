N = int(input())

max_i = int(N ** 0.5)

for i in range(max_i, 0, -1):
    if N % i == 0:
        x = i
        y = N // i
        break

ans = x + y - 2

print(ans)
