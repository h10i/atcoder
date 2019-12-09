A = int(input())
B = int(input())
C = int(input())

score = sorted([A, B, C], reverse=True)

for s in [A, B, C]:
    print(score.index(s) + 1)
