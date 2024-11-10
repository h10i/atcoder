S = input()
N = len(S)


a = S[:(N - 1) // 2]
b = S[(N + 3) // 2 - 1:]

ans = "No"
if S == S[::-1] and a == a[::-1] and b == b[::-1]:
    ans = "Yes"

print(ans)
