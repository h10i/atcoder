N = int(input())
A = [int(input()) for _ in range(N)]

paper = {}

for a in A:
    paper.setdefault(a - 1, 0)
    paper[a - 1] += 1

ans = len(list(filter(lambda x: x % 2 == 1, paper.values())))
print(ans)
