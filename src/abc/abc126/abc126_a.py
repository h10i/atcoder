n, k = map(int, input().split())
s = input()
ans = ""

for i in range(n):
    ans += s[i].lower() if i == k - 1 else s[i]

print(ans)
