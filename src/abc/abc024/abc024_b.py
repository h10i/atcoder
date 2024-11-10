N, T = map(int, input().split())
A = [int(input()) for _ in range(N)]

total = 0
end_time = 0

for i in range(N):
    if A[i] < end_time:
        total += A[i] - A[i - 1]
    else:
        total += T
    end_time = A[i] + T

print(total)
