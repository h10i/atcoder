N = int(input())
S = input()

count = [0] * N
e_cnt = 0

for i in range(N):
    if S[i] == "W":
        e_cnt += 1
    count[i] += e_cnt

w_cnt = 0

for i in reversed(range(N)):
    if S[i] == "E":
        w_cnt += 1
    count[i] += w_cnt

ans = min(count) - 1

print(ans)
