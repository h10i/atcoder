N, M = map(int, input().split())
cnt = [0 for _ in range(30)]

for _ in range(N):
    lst = list(map(int, input().split()))
    for i in range(lst[0]):
        cnt[lst[i + 1] - 1] += 1

print(cnt.count(N))
