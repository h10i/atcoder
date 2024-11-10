H, W = map(int, input().split())

if H == 1 or W == 1:
    ans = 1
else:
    ans = (H * W + 1) // 2

print(ans)
