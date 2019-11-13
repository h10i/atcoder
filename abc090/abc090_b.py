A, B = map(int, input().split())
ans = 0

for i in range(A, B + 1):
    n = str(i)
    if n == n[::-1]:
        ans += 1

print(ans)
