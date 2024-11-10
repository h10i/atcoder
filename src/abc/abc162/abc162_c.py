import math

K = int(input())

ans = 0

for a in range(K):
    for b in range(K):
        buff = math.gcd(a + 1, b + 1)
        for c in range(K):
            ans += math.gcd(buff, c + 1)

print(ans)
