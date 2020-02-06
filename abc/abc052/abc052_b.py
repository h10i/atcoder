N = int(input())
S = input()

x = 0
x_max = 0

for i in range(N):
    if S[i] == "I":
        x += 1
    else:
        x -= 1
    x_max = max(x, x_max)

print(x_max)
