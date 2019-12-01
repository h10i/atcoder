A, B, C = map(int, input().split())
ans = "NO"

for b in range(1, B + 1):
    if (A * b) % B == C:
        ans = "YES"
        break

print(ans)
