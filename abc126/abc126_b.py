m = ["{:02}".format(i) for i in range(1, 13)]
s = input()
a = s[:2] in m
b = s[2:] in m
ans = "NA"

if a and b:
    ans = "AMBIGUOUS"
elif a:
    ans = "MMYY"
elif b:
    ans = "YYMM"

print(ans)
