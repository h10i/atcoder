n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
total = sum(a)


def attack(i, j):
    global a
    global b

    if a[i] >= b[j]:
        a[i] -= b[j]
        b[j] = 0
    else:
        b[j] -= a[i]
        a[i] = 0


for i in range(n):
    attack(i, i)
    attack(i + 1, i)

print(total - sum(a))
