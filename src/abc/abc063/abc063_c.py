N = int(input())
s = [int(input()) for _ in range(N)]

t = sorted(s)
ans = sum(t)

if ans % 10 == 0:
    for i in range(N):
        if t[i] % 10 != 0:
            ans -= t[i]
            break
    else:
        ans = 0

print(ans)
