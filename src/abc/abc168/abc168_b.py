K = int(input())
S = input()

ans = S

if len(S) > K:
    ans = S[:K] + "..."

print(ans)
