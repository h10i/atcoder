from collections import deque

H, W = map(int, input().split())
S = [input() for _ in range(H)]

max_cnt = 0

for h in range(H):
    for w in range(W):
        d = [[-1 for _ in range(W)] for _ in range(H)]
        que = deque([(h, w, 0)])
        while len(que) > 0:
            x, y, c = que.popleft()
            if x >= H or x < 0 or y >= W or y < 0:
                continue
            if d[x][y] == -1 and S[x][y] == ".":
                d[x][y] = c
                max_cnt = max(c, max_cnt)
            else:
                continue
            que.append((x + 1, y, c + 1))
            que.append((x - 1, y, c + 1))
            que.append((x, y + 1, c + 1))
            que.append((x, y - 1, c + 1))


print(max_cnt)
