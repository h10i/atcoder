N, M = map(int, input().split())

s = [0] * M
c = [0] * M

for i in range(M):
    s[i], c[i] = map(int, input().split())

ans = -1

for n in range(10 ** N):
    num = str(n)
    if len(num) != N:
        continue
    if all([num[s[i] - 1] == str(c[i]) for i in range(M)]):
        ans = num
        break

print(ans)
