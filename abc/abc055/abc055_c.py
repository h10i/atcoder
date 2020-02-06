N, M = map(int, input().split())

ans = 0

ans += min(N, M // 2)
ans += max(M - (N * 2), 0) // 4

print(ans)
