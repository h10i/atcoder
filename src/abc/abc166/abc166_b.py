N, K = map(int, input().split())
D = [0] * K
A = [None] * K

for k in range(K):
    D[k] = int(input())
    A[k] = list(map(int, input().split()))

snuke = [0] * N

for k in range(K):
    for d in range(D[k]):
        snuke[A[k][d] - 1] += 1

ans = snuke.count(0)

print(ans)
