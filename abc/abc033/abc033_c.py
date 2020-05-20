S = input()

s_list = S.split("+")
ans = 0

for s in s_list:
    if "0" not in s:
        ans += 1

print(ans)
