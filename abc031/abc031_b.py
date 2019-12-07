L, H = map(int, input().split())
N = int(input())
A = [int(input()) for _ in range(N)]

for a in A:
    if a > H:
        print(-1)
    elif a < L:
        print(L - a)
    else:
        print(0)
