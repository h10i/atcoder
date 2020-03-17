import heapq

N, M = map(int, input().split())
A = list(map(lambda x: int(x) * -1, input().split()))

heapq.heapify(A)

for _ in range(M):
    heapq.heappush(A, (heapq.heappop(A) + 1) // 2)

ans = sum(A) * -1

print(ans)
