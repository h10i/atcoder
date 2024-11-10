N, M = map(int, input().split())
H = list(map(int, input().split()))
A = [0] * M
B = [0] * M

for m in range(M):
    A[m], B[m] = map(int, input().split())

c = [True] * N

for m in range(M):
    a = A[m] - 1
    b = B[m] - 1
    if H[a] > H[b]:
        c[b] = False
    elif H[a] < H[b]:
        c[a] = False
    else:
        c[a] = False
        c[b] = False

ans = c.count(True)

print(ans)
