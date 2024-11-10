N = int(input())
A = [int(input()) for _ in range(N)]

print(N - len(set(A)))
