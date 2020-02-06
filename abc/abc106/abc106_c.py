S = input()
K = int(input())

ans = S[0]

for i in range(0, K):
    if S[i] != "1":
        ans = S[i]
        break

print(ans)
