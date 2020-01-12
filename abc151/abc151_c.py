N, M = map(int, input().split())

problems = [0] * N
ans = [0, 0]

for _ in range(M):
    p, S = input().split()
    i = int(p) - 1
    if problems[i] == -1:
        continue
    if S == "WA":
        problems[i] += 1
    else:
        ans[0] += 1
        ans[1] += problems[i]
        problems[i] = -1

print(" ".join(map(str, ans)))
