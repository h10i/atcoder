A, B, C = map(int, input().split())

x = A + B == C
y = A - B == C

if x and y:
    ans = "?"
elif x:
    ans = "+"
elif y:
    ans = "-"
else:
    ans = "!"

print(ans)
