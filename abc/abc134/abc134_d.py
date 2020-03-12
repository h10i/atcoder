from collections import deque

N = int(input())
A = list(map(int, input().split()))

check = [0] * N

for i in reversed(range(1, N + 1)):
    if sum(check[i - 1::i]) % 2 != A[i - 1]:
        check[i - 1] = 1

M = sum(check)
ans = deque()

for index, value in enumerate(check):
    if value == 1:
        ans.append(index + 1)

print(M)
if M > 0:
    print(*ans)
