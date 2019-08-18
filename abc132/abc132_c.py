import sys

input = sys.stdin.readline

n = int(input())
d = sorted(list(map(int, input().split())))
mid = n // 2
print(d[mid] - d[mid - 1])
