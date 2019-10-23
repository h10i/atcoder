A, B, C = map(int, input().split())
K = int(input())

max_n = max(A, B, C)
print(sum([A, B, C]) + (2 ** K - 1) * max_n)
