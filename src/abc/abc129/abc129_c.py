import sys

input = sys.stdin.readline

n, m = map(int, input().split())
mod = 10 ** 9 + 7
broken_steps = [False for _ in range(n + 1)]

for _ in range(m):
    broken_steps[int(input())] = True

steps = [0 for _ in range(n + 1)]
steps[0] = 1

for now in range(n):
    next = now + 1
    if not broken_steps[next]:
        steps[next] = (steps[now] + steps[now - 1]) % mod

print(steps[n])
