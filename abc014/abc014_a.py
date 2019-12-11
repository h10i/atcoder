a = int(input())
b = int(input())

c = a % b

if c == 0:
    ans = 0
else:
    ans = b - c

print(ans)
