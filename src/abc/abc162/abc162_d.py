N = int(input())
S = input()

c = 0

for i in range(N):
    x = 1
    while True:
        j = i + x
        k = j + x
        if k >= N:
            break
        if S[i] != S[j] and S[i] != S[k] and S[j] != S[k]:
            c += 1
        x += 1

ans = S.count("R") * S.count("G") * S.count("B") - c
print(ans)
