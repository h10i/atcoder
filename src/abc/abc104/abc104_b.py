S = input()

if S[0] == "A" and S[2:-1].count("C") == 1:
    ans = "AC"
    for s in S:
        if s not in "AC" and s.isupper():
            ans = "WA"
            break
else:
    ans = "WA"

print(ans)
