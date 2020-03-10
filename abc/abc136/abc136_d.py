S = input()

N = len(S)
cnt = [0 for _ in range(N)]
r_cnt = 0
l_cnt = 0
i = 0

while i < N - 1:
    if S[i] == "R":
        r_cnt += 1
    if S[i + 1] == "L":
        buff = i
        while i < N - 1 and S[i + 1] == "L":
            l_cnt += 1
            i += 1
        cnt[buff] = (r_cnt + 1) // 2 + l_cnt // 2
        cnt[buff + 1] = r_cnt // 2 + (l_cnt + 1) // 2
        r_cnt = 0
        l_cnt = 0
    i += 1

print(*cnt)
