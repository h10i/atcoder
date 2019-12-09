N = int(input())
S = input()

ans = -1

if N % 2 == 1:
    if N % 3 == 0:
        block = "abc"
    elif N % 3 == 1:
        block = "bca"
    else:
        block = "cab"

    accessory = (block * (N // 3 + 1))[:N]

    if S == accessory:
        ans = (N - 1) // 2

print(ans)
