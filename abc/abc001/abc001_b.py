m = int(input())

if m < 100:
    ans = "00"
elif m <= 5000:
    ans = "{:02}".format(m // 100)
elif m <= 30000:
    ans = "{:02}".format(m // 1000 + 50)
elif m <= 70000:
    ans = "{:02}".format((m // 1000 - 30) // 5 + 80)
else:
    ans = "89"

print(ans)
