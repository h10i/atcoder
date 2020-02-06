N = int(input())
K = int(input())
x = list(map(int, input().split()))
total_distance = 0

for i in range(N):
    ball_p = x[i]
    total_distance += min(ball_p, abs(ball_p - K)) * 2

print(total_distance)
