A, B = map(int, input().split())
ans = 1
t = A

while t < B:
    t += A - 1
    ans += 1

if B == 1:
    ans = 0

print(ans)
