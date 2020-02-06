N = int(input())
B = list(map(int, input().split()))
A = [0 for _ in range(N)]
A[0], A[1] = B[0], B[0]

for i in range(1, N - 1):
    b = B[i]
    A[i + 1] = b
    if b < max(A[i], A[i + 1]):
        A[i], A[i + 1] = b, b

print(sum(A))
