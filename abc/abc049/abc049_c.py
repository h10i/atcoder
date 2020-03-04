S = input()

words = ["dream", "dreamer", "erase", "eraser"]
ans = "YES"
r = len(S)

while r > 0:
    ok = False
    for w in words:
        l = r - len(w)
        if l < 0:
            continue
        if S[l:r] == w:
            r = l
            ok = True
            break
    if not ok:
        ans = "NO"
        break

print(ans)
