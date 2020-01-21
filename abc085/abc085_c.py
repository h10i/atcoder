N, Y = map(int, input().split())

ans = [-1, -1, -1]

for i in range(N + 1):
    for j in range(N + 1 - i):
        k = N - i - j
        total = i * 10000 + j * 5000 + k * 1000
        if total == Y:
            ans = [i, j, k]
            break
    else:
        continue
    break

print(" ".join(map(str, ans)))
