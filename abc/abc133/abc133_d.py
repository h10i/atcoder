import sys

input = sys.stdin.readline

N = int(input())
A = list(map(int, input().split()))

x = [0] * N
x[0] = sum(A) - sum(A[i] for i in range(1, N, 2)) * 2

for i in range(1, N):
    x[i] = A[i - 1] * 2 - x[i - 1]

print(*x)
