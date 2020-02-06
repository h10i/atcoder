N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))
ans = B[A[0] - 1]
tmp = A[0]

for i in range(1, N):
    ans += B[A[i] - 1]
    if A[i] == tmp + 1:
        ans += C[A[i] - 2]
    tmp = A[i]

print(ans)
