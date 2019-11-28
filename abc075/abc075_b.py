H, W = map(int, input().split())
S = [None] * H

for i in range(H):
    S[i] = list(input())


def count_bomb_num(S, h, w):
    bomb_num = 0

    for i in range(-1, 2):
        ni = h + i
        if ni < 0 or H <= ni:
            continue
        for j in range(-1, 2):
            nj = w + j
            if nj < 0 or W <= nj:
                continue
            if S[ni][nj] == "#":
                bomb_num += 1

    return bomb_num


for h in range(H):
    for w in range(W):
        if S[h][w] == "#":
            continue
        S[h][w] = str(count_bomb_num(S, h, w))

for s in S:
    print("".join(s))
