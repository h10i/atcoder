def gcd(x, y):
    a = x
    b = y
    while True:
        r = a % b
        if r == 0:
            break
        a = b
        b = r
    return b


N = int(input())
A = list(map(int, input().split()))

B = sorted(A)
b = B[0]

for i in range(1, N):
    b = gcd(b, B[i])

print(b)
