N = int(input())

x = N % 10

if x in (2, 4, 5, 7, 9):
    ans = "hon"
elif x in (0, 1, 6, 8):
    ans = "pon"
else:
    ans = "bon"

print(ans)
