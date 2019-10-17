a, b, c, d = map(int, input().split())

ab = abs(b - a)
bc = abs(c - b)
ca = abs(a - c)

if (ab <= d and bc <= d) or ca <= d:
    ans = "Yes"
else:
    ans = "No"

print(ans)
