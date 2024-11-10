import sys

input = sys.stdin.readline

N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))


def count_a(A, X):
    l = -1
    r = N
    while r - l > 1:
        m = (r + l) // 2
        if A[m] < b:
            l = m
        else:
            r = m
    return l + 1


def count_c(C, X):
    l = -1
    r = N
    while r - l > 1:
        m = (r + l) // 2
        if C[m] > b:
            r = m
        else:
            l = m
    return N - r


A.sort()
B.sort()
C.sort()

ans = 0
A_min = A[0]
C_max = C[-1]

for b in B:
    if A_min < b < C_max:
        ans += count_a(A, b) * count_c(C, b)

print(ans)
