from collections import deque

f_inf = float('inf')

R, C = map(int, input().split())
sy, sx = map(int, input().split())
gy, gx = map(int, input().split())
c = [input() for _ in range(R)]

q = deque()
q.append([sy - 1, sx - 1, 0])
m = [[f_inf for _ in range(C)] for _ in range(R)]

while q:
    y, x, d = q.popleft()

    if y < 0 or y >= R or x < 0 or x >= C:
        continue
    if c[y][x] == "#" or m[y][x] != f_inf:
        continue

    m[y][x] = min(m[y][x], d)
    d += 1
    q.append([y + 1, x, d])
    q.append([y - 1, x, d])
    q.append([y, x + 1, d])
    q.append([y, x - 1, d])

ans = m[gy - 1][gx - 1]

print(ans)
