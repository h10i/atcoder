S = input()
ans = None

for i in range(len(S) - 1, -1, -1):
    t = S[:i]
    size = len(t) // 2
    if t[:size] == t[size:]:
        ans = len(t)
        break

print(ans)
