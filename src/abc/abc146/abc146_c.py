A, B, X = map(int, input().split())

max_n = 10 ** 9 + 1
min_n = 0

while max_n - min_n > 1:
    n = (max_n + min_n) // 2
    p = A * n + B * len(str(n))
    if p > X:
        max_n = n
    else:
        min_n = n

print(min_n)
