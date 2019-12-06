N = int(input())

s = [list(input()) for _ in range(N)]
t = [[""] * N for _ in range(N)]

for i in range(N):
    for j in range(N):
        t[j][N - 1 - i] = s[i][j]

for i in range(N):
    print("".join(t[i]))
