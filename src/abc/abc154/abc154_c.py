N = int(input())
A = list(map(int, input().split()))

ans = "NO"
if len(set(A)) == len(A):
    ans = "YES"

print(ans)
