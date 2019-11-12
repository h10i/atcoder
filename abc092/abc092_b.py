N = int(input())
D, X = map(int, input().split())
A = [0] * N
total = X

for i in range(N):
    A[i] = int(input())

for a in A:
    total += (D - 1) // a + 1

print(total)
