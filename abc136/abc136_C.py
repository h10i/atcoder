n = int(input())
h = list(map(int, input().split()))
prev = h[0]
ans = 'Yes'
for i in range(1, len(h)):
    if prev > h[i]:
        ans = 'No'
        break
    elif prev < h[i]:
        prev = h[i] - 1
print(ans)
