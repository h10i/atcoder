w = input()

ans = "Yes"

for s in w:
    if w.count(s) % 2 == 1:
        ans = "No"
        break

print(ans)
