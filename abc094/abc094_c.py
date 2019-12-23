N = int(input())
X = list(map(int, input().split()))

a = sorted(X)
mid = N // 2 - 1

for i in range(N):
    if X[i] <= a[mid]:
        ans = a[mid + 1]
    else:
        ans = a[mid]
    print(ans)
