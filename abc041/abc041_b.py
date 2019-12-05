A, B, C = map(int, input().split())

N = 10 ** 9 + 7

print(A * B % N * C % N)
