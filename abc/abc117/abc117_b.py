N = int(input())
L = list(map(int, input().split()))

if max(L) * 2 < sum(L):
    ans = "Yes"
else:
    ans = "No"

print(ans)
