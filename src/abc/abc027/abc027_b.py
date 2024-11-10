N = int(input())
a = list(map(int, input().split()))

total = sum(a)
average = total // N
ans = 0

if total % N == 0:
    for i in range(1, N):
        if sum(a[:i]) != average * i:
            ans += 1
else:
    ans = -1

print(ans)
