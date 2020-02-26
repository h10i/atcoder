N = int(input())
L = list(map(int, input().split()))

L.sort()

ans = 0

for i in range(N - 2):
    a = L[i]
    for j in range(i + 1, N - 1):
        b = L[j]
        left = j
        right = N
        if L[left + 1] >= a + b:
            continue
        while right - left > 1:
            mid = (left + right) // 2
            c = L[mid]
            if c < a + b:
                left = mid
            else:
                right = mid
        ans += left - j

print(ans)
