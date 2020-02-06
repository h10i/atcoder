X, Y = map(int, input().split())

a = X
ans = 0

while True:
    if a <= Y:
        ans += 1
        a *= 2
    else:
        break

print(ans)
