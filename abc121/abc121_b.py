N, M, C = map(int, input().split())
B = list(map(int, input().split()))
ans = 0

for _ in range(N):
    A = list(map(int, input().split()))
    t = 0
    for a, b in zip(A, B):
        t += a * b
    if t + C > 0:
        ans += 1

print(ans)
