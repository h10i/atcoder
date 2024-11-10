N = int(input())
A = [int(input()) for _ in range(N)]

print(sorted(set(A))[-2])
