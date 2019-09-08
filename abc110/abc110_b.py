N, M, X, Y = map(int, input().split())
x = list(map(int, input().split()))
y = list(map(int, input().split()))
ans = "War"

for i in range(X + 1, Y + 1):
    if i <= min(y) and i > max(x):
        ans = "No War"
        break

print(ans)
