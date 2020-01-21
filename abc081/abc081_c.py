N, K = map(int, input().split())
A = list(map(int, input().split()))

cnt = {}

for i in range(N):
    cnt.setdefault(A[i], 0)
    cnt[A[i]] += 1

cnt_val = sorted(cnt.values())
ans = sum(cnt_val[:len(cnt_val) - K])

print(ans)
