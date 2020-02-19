N = int(input())


def dfs(s):
    if int(s) > N:
        return 0
    if all(s.count(c) > 0 for c in "357"):
        cnt = 1
    else:
        cnt = 0
    for c in "357":
        cnt += dfs(s + c)
    return cnt


ans = dfs("0")

print(ans)
