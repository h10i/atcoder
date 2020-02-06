s = input()

ans = ""

for key in s:
    if key == "B":
        ans = ans[:-1]
    else:
        ans += key

print(ans)
