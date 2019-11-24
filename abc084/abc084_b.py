A, B = map(int, input().split())
S = input()

if S[A] == "-" and S.count("-") == 1:
    ans = "Yes"
else:
    ans = "No"

print(ans)
