N = int(input())

w = "MARCH"
count = {key: 0 for key in w}

for i in range(N):
    S = input()
    c = S[0]
    if c in w:
        count[c] += 1

ans = 0
M = len(w)

for i in range(M):
    for j in range(i + 1, M):
        for k in range(j + 1, M):
            ans += count[w[i]] * count[w[j]] * count[w[k]]

print(ans)
