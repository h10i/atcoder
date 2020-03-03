from collections import deque

H, W = map(int, input().split())
S = [input() for _ in range(H)]

c = [[-1 for _ in range(W)] for _ in range(H)]
d = [(1, 0), (-1, 0), (0, 1), (0, -1)]
q = deque()
q.append((0, 0))
c[0][0] = 1

while q:
    x, y = q.popleft()
    for dx, dy in d:
        nx = x + dx
        ny = y + dy
        if nx < 0 or nx >= W or ny < 0 or ny >= H:
            continue
        if S[ny][nx] == "." and c[ny][nx] is -1:
            c[ny][nx] = c[y][x] + 1
            q.append((nx, ny))

c_min = c[H - 1][W - 1]

if c_min == -1:
    ans = -1
else:
    ans = sum([s.count(".") for s in S]) - c_min

print(ans)
