S = input()
size = len(S)

ans = 0

for bit in range(1 << size - 1):
    exp = S[0]
    for i in range(size - 1):
        if (bit >> i) & 1:
            exp += "+"
        exp += S[i + 1]
    ans += eval(exp)

print(ans)
