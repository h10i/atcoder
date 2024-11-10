N = int(input())
A = list(map(int, input().split()))

check = {}
ans = 0

for i in range(N):
    x = i - A[i]
    y = A[i] + i
    ans += check.get(x, 0)
    check.setdefault(y, 0)
    check[y] += 1

print(ans)
