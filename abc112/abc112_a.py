N = int(input())
ans = 0

if N == 1:
    print("Hello World")
else:
    for _ in range(N):
        ans += int(input())
    print(ans)
