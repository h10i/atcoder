from collections import deque

K = int(input())

q = deque([i for i in range(1, 10)])

for _ in range(K):
    x = q.popleft()
    y = x % 10
    if y > 0:
        q.append(10 * x + y - 1)
    q.append(x * 10 + y)
    if y < 9:
        q.append(10 * x + y + 1)

print(x)
