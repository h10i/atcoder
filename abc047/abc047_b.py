W, H, N = map(int, input().split())

bottom_left = [0, 0]
top_right = [W, H]

for _ in range(N):
    x, y, a = map(int, input().split())
    if a == 1 and bottom_left[0] < x:
        bottom_left[0] = x
    elif a == 2 and top_right[0] > x:
        top_right[0] = x
    elif a == 3 and bottom_left[1] <  y:
        bottom_left[1] = y
    elif a == 4 and top_right[1] > y:
        top_right[1] = y

if top_right[0] > bottom_left[0] and top_right[1] > bottom_left[1]:
    area = (top_right[0] - bottom_left[0]) * (top_right[1] - bottom_left[1])
else:
    area = 0

print(area)
