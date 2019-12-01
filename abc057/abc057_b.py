N, M = map(int, input().split())

students = [list(map(int, input().split())) for _ in range(N)]
check_p = [list(map(int, input().split())) for _ in range(M)]

for s in students:
    min_distance = (10 ** 8) * 4 + 1
    ans = 0
    for m in range(M):
        distance = abs(s[0] - check_p[m][0]) + abs(s[1] - check_p[m][1])
        if min_distance > distance:
            min_distance = distance
            ans = m + 1
    print(ans)
