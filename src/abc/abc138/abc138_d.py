import sys

input = sys.stdin.readline


class Node:
    def __init__(self, parent_id=None):
        self.val = 0
        self.parent_id = parent_id


n, q = map(int, input().split())
tree = [Node() for _ in range(n)]

for _ in range(1, n):
    a, b = map(int, input().split())
    tree[b - 1].parent_id = a - 1

for _ in range(q):
    p, x = map(int, input().split())
    tree[p - 1].val += x

for i in range(1, n):
    tree[i].val += tree[tree[i].parent_id].val

print(*[node.val for node in tree])
