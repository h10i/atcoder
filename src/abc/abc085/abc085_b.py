N = int(input())
d = [None] * N

for i in range(N):
    d[i] = int(input())

ans = len(set(d))

print(ans)
