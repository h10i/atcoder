N = int(input())
p = 1

for i in range(N):
    p = p * (i + 1) % (10 ** 9 + 7)

print(p)
