N = int(input())
S = input()

n = N // 2

if S[:n] == S[n:]:
    print("Yes")
else:
    print("No")
