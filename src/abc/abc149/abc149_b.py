A, B, K = map(int, input().split())

ans = [None] * 2

ans[0] = str(max(A - K, 0))
ans[1] = str(max(B - max(K - A, 0), 0))

print(" ".join(ans))
