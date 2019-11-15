a, b = input().split()
c = int(a + b)

if (c ** 0.5).is_integer():
    ans = "Yes"
else:
    ans = "No"

print(ans)
