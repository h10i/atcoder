N = int(input())
P = list(map(int, input().split()))

cnt = 1
p_min = P[0]

for i in range(1, N):
    if P[i] < p_min:
        cnt += 1
        p_min = P[i]

print(cnt)
