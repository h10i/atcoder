import sys

input = sys.stdin.readline

n = int(input())
nums = [None] * n

for i in range(n):
    nums[i] = int(input())
sorted_nums = sorted(nums)

for num in nums:
    max_val = sorted_nums[n - 1]
    if num == max_val:
        max_val = sorted_nums[n - 2]
    print(max_val)
