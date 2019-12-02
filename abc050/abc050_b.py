N = int(input())
T = list(map(int, input().split()))
M = int(input())
total_time = sum(T)

for i in range(M):
    P, X = map(int, input().split())
    print(total_time - T[P - 1] + X)
