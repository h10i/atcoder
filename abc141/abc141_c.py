N, K, Q = map(int, input().split())
score = [K for _ in range(N)]

for i in range(Q):
    A = int(input())
    score[A - 1] += 1

for s in score:
    if s - Q <= 0:
        ans = "No"
    else:
        ans = "Yes"
    print(ans)
