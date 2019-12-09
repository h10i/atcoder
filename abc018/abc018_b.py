S = input()
N = int(input())

a = list(S)

for _ in range(N):
    l, r = map(int, input().split())
    size = r - l + 1
    b = [None] * size

    for i in range(size):
        b[i] = a[i + l - 1]

    for i in range(size):
        a[r - i - 1] = b[i]

print("".join(a))
