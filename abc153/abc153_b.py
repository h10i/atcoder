H, N = map(int, input().split())
A = list(map(int, input().split()))

if H <= sum(A):
    ans = "Yes"
else:
    ans = "No"

print(ans)
