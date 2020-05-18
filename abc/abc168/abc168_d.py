from collections import deque

N, M = map(int, input().split())

rooms = [[] for _ in range(N)]

for _ in range(M):
    A, B = map(int, input().split())
    rooms[A - 1].append(B - 1)
    rooms[B - 1].append(A - 1)

signposts = [None] * N
que = deque([0])

while que:
    n = que.popleft()
    for room in rooms[n]:
        if signposts[room] is None:
            que.append(room)
            signposts[room] = n + 1

if None in signposts:
    print("No")
else:
    signposts[0] = "Yes"
    for s in signposts:
        print(s)
