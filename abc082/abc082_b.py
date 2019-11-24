s = input()
t = input()

s_asc = "".join(sorted(s))
t_desc = "".join(sorted(t, reverse=True))

if s_asc < t_desc:
    ans = "Yes"
else:
    ans = "No"

print(ans)
