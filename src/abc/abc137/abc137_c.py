import sys
import collections

n = int(input())
lst = [None] * n
for i in range(n):
    lst[i] = "".join(sorted(list(sys.stdin.readline().strip())))

ans = 0
for v in collections.Counter(lst).values():
    ans += v * (v - 1) // 2
print(ans)
