N = int(input())

ans = "No"
for i in range(N // 4 + 1):
    for j in range(N // 7 + 1):
        total = (4 * i) + (7 * j)
        if total == N:
            ans = "Yes"
            break
    else:
        continue
    break

print(ans)
