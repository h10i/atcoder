N = int(input())
a = list(map(int, input().split()))

quadruple_cnt = 0
double_cnt = 0
other_cnt = 0

for i in range(N):
    if a[i] % 4 == 0:
        quadruple_cnt += 1
    elif a[i] % 2 == 0:
        double_cnt += 1
    else:
        other_cnt += 1

if double_cnt == 0:
    n = 0
else:
    n = 1

if quadruple_cnt >= other_cnt - 1 + n:
    ans = "Yes"
else:
    ans = "No"

print(ans)
