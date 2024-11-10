S = input()
T = int(input())

x = 0
y = 0

x += S.count("R") - S.count("L")
y += S.count("D") - S.count("U")
p = abs(x) + abs(y)
q = S.count("?")

if T == 1:
    p += q
else:
    p = max(p - q, len(S) % 2)

print(p)
