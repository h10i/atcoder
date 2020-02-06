n, q = map(int, input().split())
s = input()
c = [0 for _ in range(n)]

for i in range(1, n):
    if s[i - 1 : i + 1] == "AC":
        c[i] += 1
    c[i] += c[i - 1]

for _ in range(q):
    l, r = map(int, input().split())
    print(c[r - 1] - c[l - 1])
