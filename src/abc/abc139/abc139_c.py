N = int(input())
H = list(map(int, input().split()))
c_max = 0
c = 0

for i in range(N - 1):
    if H[i] >= H[i + 1]:
        c += 1
    else:
        if c > c_max:
            c_max = c
        c = 0

if c > c_max:
    c_max = c

print(c_max)
