N, K = map(int, input().split())
R, S, P = map(int, input().split())
T = input()

data = {"r": P, "s": R, "p": S}
ans = 0

for i in range(K):
    hand = T[i]
    ans += data[hand]

    for j in range(i + K, N, K):
        if T[j] == hand:
            hand = "other"
        else:
            hand = T[j]
            ans += data[hand]

print(ans)
