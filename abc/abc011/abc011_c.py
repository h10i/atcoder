N = int(input())
NG = [int(input()) for _ in range(3)]

num = N

for _ in range(100):
    if num in NG:
        break
    if num - 3 not in NG:
        num -= 3
    elif num - 2 not in NG:
        num -= 2
    elif num - 1 not in NG:
        num -= 1

if num <= 0:
    print("YES")
else:
    print("NO")
