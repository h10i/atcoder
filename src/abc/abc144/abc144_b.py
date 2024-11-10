N = int(input())

ans = "No"

for i in range(9):
    for j in range(9):
        if (i + 1) * (j + 1) == N:
            ans = "Yes"
            break
    else:
        continue
    break

print(ans)
