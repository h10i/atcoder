N = int(input())
BTC = 380000.0
t = 0

for _ in range(N):
    x, u = input().split()
    if u == "BTC":
        t += float(x) * BTC
    elif u == "JPY":
        t += int(x)

print(t)
