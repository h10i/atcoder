a, b = map(int, input().split())

if a <= 5:
    ans = 0
elif a >= 13:
    ans = b
else:
    ans = b // 2

print(ans)
