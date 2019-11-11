A, B, X = map(int, input().split())

if X >= A and X <= A + B:
    ans = "YES"
else:
    ans = "NO"

print(ans)
