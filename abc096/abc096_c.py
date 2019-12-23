H, W = map(int, input().split())
s = ["." * (W + 2) for _ in range(H + 2)]

ans = "Yes"

for h in range(H):
    s[h + 1] = "." + input() + "."

for h in range(1, H + 1):
    for w in range(1, W + 1):
        if s[h][w] == "#":
            t = [s[h + 1][w], s[h - 1][w], s[h][w + 1], s[h][w - 1]]
            if "#" not in t:
                ans = "No"
                break
    else:
        continue
    break

print(ans)
