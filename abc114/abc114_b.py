S = input()
ans = 1000

for i in range(len(S) - 2):
    n = abs(753 - int(S[i : i + 3]))
    if n < ans:
        ans = n

print(ans)
