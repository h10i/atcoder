a, b = map(int, input().split())

if a > b:
    ans = a * 2 - 1
elif a < b:
    ans = b * 2 - 1
else:
    ans = a + b

print(ans)
