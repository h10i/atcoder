N = int(input())
W = [None] * N

for i in range(N):
    W[i] = input()

ans = "Yes"

for i in range(1, N):
    if W[i - 1][-1] != W[i][0] or W.count(W[i]) >= 2:
        ans = "No"
        break

print(ans)
