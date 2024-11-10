from collections import deque

N = int(input())
a = list(map(int, input().split()))

b = deque()

if N % 2 == 0:
    for i in range(0, N, 2):
        b.append(a[i])

    for i in range(1, N, 2):
        b.appendleft(a[i])
else:
    for i in range(0, N, 2):
        b.appendleft(a[i])

    for i in range(1, N, 2):
        b.append(a[i])

print(*b)
