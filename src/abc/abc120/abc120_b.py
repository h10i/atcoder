A, B, K = map(int, input().split())
d = []

for i in range(min(A, B)):
    n = i + 1
    if A % n == 0 and B % n == 0:
        d.append(n)

print(d[-K])
