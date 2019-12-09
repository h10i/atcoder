X = input()

ans = "YES"

size = len(X)
i = 0

while i < size:
    if X[i] == "c":
        if i + 1 < size and X[i + 1] == "h":
            i += 2
        else:
            ans = "NO"
            break
    elif X[i] in "oku":
        i += 1
    else:
        ans = "NO"
        break

print(ans)
