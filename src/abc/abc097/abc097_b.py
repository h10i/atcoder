X = int(input())
ans = 1

for i in range(2, X):
    for j in range(2, X):
        e = i ** j
        if e <= X:
            if e > ans:
                ans = e
        else:
            break

print(ans)
