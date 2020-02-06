import string

N = int(input())
S = input()

ans = 0

for i in range(1, N):
    cnt = 0
    for j in string.ascii_lowercase:
        if j in S[:i] and j in S[i:]:
            cnt += 1
    if cnt > ans:
        ans = cnt

print(ans)
