S = input()
odd = ["R", "U", "D"]
even = ["L", "U", "D"]
i = 0
ans = "Yes"

for s in S:
    if i % 2 == 0:
        if s not in odd:
            ans = "No"
            break
    else:
        if s not in even:
            ans = "No"
            break
    i += 1

print(ans)
