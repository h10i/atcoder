import sys
input = sys.stdin.readline

N = int(input())
A = list(map(int, input().split()))

mod = 10 ** 9 + 7
ans = 0
ni = 1

for i in range(60):
    x = sum([1 for j in range(N) if (A[j] >> i) & 1])
    buff = x * (N - x) * ni
    ans += buff
    ni = ni * 2

print(ans % mod)
