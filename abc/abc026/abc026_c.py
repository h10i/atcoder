N = int(input())
B = [int(input()) for _ in range(N - 1)]

saraly = [1] * N
m = [[] for _ in range(N)]

for i in range(N - 1):
    m[B[i] - 1].append(i + 1)

for i in reversed(range(N)):
    if m[i]:
        t = [saraly[j] for j in m[i]]
        saraly[i] = max(t) + min(t) + 1

print(saraly[0])
