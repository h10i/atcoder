group = [[1, 3, 5, 7, 8, 10, 12],  [4, 6, 9, 11], [2]]
x, y = map(int, input().split())
ans = "No"

for g in group:
    if x in g and y in g:
        ans = "Yes"
        break

print(ans)
