W = input()

ans = ""

for w in W:
    if w not in "aiueo":
        ans += w

print(ans)
