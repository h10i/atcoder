S = input()
T = input()

wild_card = "@atcoder"
ans = "You can win"

for s, t in zip(S, T):
    if s != t:
        check_s = s == "@" and t in wild_card
        check_t = t == "@" and s in wild_card
        if not (check_s or check_t):
            ans = "You will lose"

print(ans)
