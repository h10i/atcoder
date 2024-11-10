N = input()

if N[1] == N[2] and N.count(N[1]) >= 3:
    ans = "Yes"
else:
    ans = "No"

print(ans)
