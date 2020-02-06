nums = list(map(int, input().split()))

n = len(nums)
total = set()

for i in range(n):
    for j in range(i + 1, n):
        for k in range(j + 1, n):
            total.add(nums[i] + nums[j] + nums[k])

ans = sorted(list(total))[-3]

print(ans)
