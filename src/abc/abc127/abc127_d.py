import sys

input = sys.stdin.readline

N, M = map(int, input().split())
A = list(map(int, input().split()))
op = [list(map(int, input().split())) for _ in range(M)]

cards = sorted(A)
op.sort(key=lambda x: -x[1])

i = 0

for m in range(M):
    b, c = op[m]
    for _ in range(b):
        if cards[i] < c:
            cards[i] = c
            i += 1
            if i >= N:
                break
        else:
            break
    else:
        continue
    break

print(sum(cards))
