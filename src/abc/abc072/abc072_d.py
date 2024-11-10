N = int(input())
p = list(map(int, input().split()))

ans = 0
i = 0

while i < N:
    if p[i] == i + 1:
        i += 2
        ans += 1
    else:
        i += 1

print(ans)
