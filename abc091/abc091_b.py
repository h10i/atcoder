N = int(input())
p = {}

for _ in range(N):
    s = input()
    p.setdefault(s, 0)
    p[s] += 1

M = int(input())

for _ in range(M):
    s = input()
    p.setdefault(s, 0)
    p[s] -= 1

ans = max(p.values())

print(ans if ans >= 0 else 0)
