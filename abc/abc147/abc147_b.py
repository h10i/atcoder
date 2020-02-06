S = input()

size = len(S)
ans = 0

for i in range(size // 2):
    if S[i] != S[size - i - 1]:
        ans += 1

print(ans)
