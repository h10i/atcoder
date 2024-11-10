import sys

input = sys.stdin.readline

N = int(input())
a = [0] * N

for i in range(N):
    a[i] = int(input())

i = a[0]
count = 1

for _ in range(N):
    if i == 2:
        break
    i = a[i - 1]
    count += 1

if i != 2:
    count = -1

print(count)
