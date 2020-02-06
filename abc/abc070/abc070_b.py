A, B, C, D = map(int, input().split())
time = min(B, D) - max(A, C)

print(max(time, 0))
