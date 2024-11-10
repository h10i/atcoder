N = int(input())
A = [0] * N
ts = [None] * N

for i in range(N):
    A[i] = int(input())
    t = [None] * A[i]
    for j in range(A[i]):
        t[j] = list(map(int, input().split()))
    ts[i] = t

ans = 0

for bit in range(1 << N):
    for i in range(N):
        if ((bit >> i) & 1) == 0:
            continue
        for j in range(A[i]):
            x, y = ts[i][j]
            x -= 1
            if ((bit >> x) & 1) != y:
                break
        else:
            continue
        break
    else:
        count = bin(bit).count("1")
        ans = max(count, ans)

print(ans)
