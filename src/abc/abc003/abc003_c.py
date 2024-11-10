N, K = map(int, input().split())
R = list(map(int, input().split()))

sorted_R = sorted(R)
ans = 0

for i in range(K):
    ans = (ans + sorted_R[N - K + i]) / 2

print(ans)
