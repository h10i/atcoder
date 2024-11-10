from collections import deque

N = int(input())

d = deque(range(1, 7))

for _ in range(N % 30 // 5):
    d.append(d.popleft())

c = list(d)

for i in range(N % 5):
    c[i], c[i + 1] = c[i + 1], c[i]

ans = "".join(map(str, c))

print(ans)
