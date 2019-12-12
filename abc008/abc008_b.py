N = int(input())

candidates = {}

for _ in range(N):
    S = input()
    candidates.setdefault(S, 0)
    candidates[S] += 1

print(max(candidates, key=candidates.get))
