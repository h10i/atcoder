N, X = map(int, input().split())
m = [0] * N

for i in range(N):
    m[i] = int(input())

print(N + (X - sum(m)) // min(m))
