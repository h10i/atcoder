A, B, C, K = map(int, input().split())

ans = min(A, K) - min(max(K - A - B, 0), C)
print(ans)
