N = int(input())
T, A = map(int, input().split())
H = list(map(int, input().split()))
a = 1000
ans = 0

for i in range(N):
    tmp = abs(A - (T - H[i] * 0.006))
    if tmp < a:
        a = tmp
        ans = i + 1

print(ans)
