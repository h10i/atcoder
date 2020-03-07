import math

A, B = map(int, input().split())

x = (A * 100 + 7) // 8
y = (B * 100 + 9) // 10
ans = max(x, y)

if (ans * 8) // 100 != A or (ans * 10) // 100 != B:
    ans = -1

print(ans)
