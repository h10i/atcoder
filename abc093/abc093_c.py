A, B, C = map(int, input().split())

n = max(A, B, C)
t = n * 3 - sum([A, B, C])

if t % 2 == 0:
    ans = t // 2
else:
    ans = (t + 3) // 2

print(ans)
