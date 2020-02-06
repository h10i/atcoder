A, D = map(int, input().split())

if A > D:
    D += 1
else:
    A += 1

print(A * D)
