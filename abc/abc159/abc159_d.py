import sys

input = sys.stdin.readline

N = int(input())
A = list(map(int, input().split()))

cnt = [0] * N

for a in A:
    cnt[a - 1] += 1

combination = [0] * N

for a in A:
    combination[a - 1] = cnt[a - 1] * (cnt[a - 1] - 1) // 2

total = sum(combination)

for a in A:
    c = combination[a - 1]
    b = cnt[a - 1]
    ans = total - c + c * (b - 2) // b
    print(ans)
