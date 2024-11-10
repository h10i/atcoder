N, M, X = map(int, input().split())
books = [list(map(int, input().split())) for _ in range(N)]

p = []

for i in range(1, 2**N):
    buff = [0] * (M + 1)

    for j in range(N):
        if i >> j & 1:
            buff = [a + b for a, b in zip(buff, books[j])]

    for a in buff[1:]:
        if a < X:
            break
    else:
        p.append(buff[0])

if len(p) > 0:
    ans = min(p)
else:
    ans = -1

print(ans)
