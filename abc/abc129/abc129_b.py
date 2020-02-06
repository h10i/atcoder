n = int(input())
w = list(map(int, input().split()))
i = 0
j = n - 1
s1 = w[i]
s2 = w[j]

while j - i > 1:
    if s1 < s2:
        i += 1
        s1 += w[i]
    else:
        j -= 1
        s2 += w[j]

print(abs(s1 - s2))
